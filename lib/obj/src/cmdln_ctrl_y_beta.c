/* **** Notes

Press <Ctrl-Y> to invoke the function.

Copy the line content after the current caret position into a clipboard.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure

Use fn. malloc, fn. free, fn. GlobalAlloc and fn. GlobalFree.

*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

# define EOL_FUL (0x04)

signed(__cdecl cmdln_ctrl_y_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);
auto signed char(*cur), (*p);

auto COORD(coord);
auto signed(i), (l), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

// CRLF (0x0D,0x0A) e.g., LF(0x0A)
XNOR(flag);

if((*argp).clipped<(0x00)) return(0x00);

/* check */
if((*argp).clip_reset) {
(*argp).clip_reset = (0x00);
(*argp).clipped = (0x00);
}

INC((*argp).clipped);

/* unmap the global buffer */
if((*argp).globally_secured) {
(*argp).globally_secured = GlobalFree((*argp).globally_secured);
if((*argp).globally_secured) {
r = GetLastError();
printf("%s%d", "<< Error at fn. GlobalFree() with no. ", r);
return(0x00);
}}

/* unmap the local buffer */
if((*argp).locally_secured) {
free((*argp).locally_secured);
(*argp).locally_secured = (0x00);
}


/* 1. secure */
r = ct((*argp).p);
l = (r+(EOL_FUL));

i = ((*argp).clipped);
cache = (KNOT*) ((*((*argp).t)).d);

while(--i) {
if(!cache) break;
r = ct((*cache).p);
l = (l+(r+(EOL_FUL)));
cache = ((*cache).d);
}

INC(l);

p = (signed char(*)) malloc(l*(sizeof(signed char)));

if(!p) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}

(*argp).locally_secured = (p);
(*argp).clipped_bytes = (l);


/* 2. copy (in CRLF) */
r = cpy(p,(*argp).p);

cur = (signed char(*)) (r+(p));

i = ((*argp).clipped);
cache = (KNOT*) ((*((*argp).t)).d);

while(--i) {
if(!cache) break;
if(flag) {
r = cpy(cur,"\r");
cur = (signed char(*)) (r+(cur));
}
r = cpy(cur,"\n");
cur = (signed char(*)) (r+(cur));
r = cpy(cur,(*cache).p);
cur = (signed char(*)) (r+(cur));
cache = ((*cache).d);
}

r = vu_clip(argp);

if(!r) {
printf("%s", "<< Error at fn. vu_clip()");
return(0x00);
}

r = SetConsoleCursorPosition((*argp).s_out,coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
