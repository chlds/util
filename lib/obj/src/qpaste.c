/* **** Notes

Quickly paste out of the clipboard.

Remarks:
Along with fn. refresh_row_numbers
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl qpaste(signed char(*base),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);
auto signed char(*p);

auto COORD(coord), (coord_b);

auto signed(total);
auto signed(l), (r);
auto signed short(flag); // flag to notify the termination

/* **** CODE/TEXT */
if(!base) return(0x00);
if(!argp) return(0x00);

r = sustain(argp);

if(!r) {
// It is empty ..or has occurred an error.
}

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

r = ct(base);

if(!r) return(0x01);
else total = (r);

XOR(l,l);
r = ((*argp).count);

if(-r+((*argp).tail)) {
r = cpy((*argp).craft,(*argp).p);
l = (r);
}

r = cpy2('\n',(*argp).p,base);

if(!(*(r+(base)))) XNOR(flag);
else XOR(flag,flag);

// on CR (0x0D)
if(!('\r'^(*(-1+(r+((*argp).p)))))) {
*(-1+(r+((*argp).p))) = ('\0');
DEC(r);
}

// insert
if(l) r = cpy(r+((*argp).p),(*argp).craft);


// sequentially
if(!flag) {

XOR(l,l);

while(0x01) {
r = cpy2('\n',(*argp).init_p,l+(base));
l = (l+(r));
if(!r) {
if(!(*(l+(base)))) break;
}
else {
if(!('\r'^(*(-1+(r+(l+(base))))))) DEC(r);
}
// secure a knot
cache = (KNOT*) malloc(0x01*(sizeof(KNOT)));
if(!cache) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}
// and secure for message
INC(r);
(*cache).p = (signed char(*)) malloc(r*(sizeof(signed char)));
if(!((*cache).p)) {
printf("%s", "<< Error at fn. malloc the second()");
return(0x00);
}
// copy
r = cpy((*cache).p,(*argp).init_p);
if(!r) {
// empty or..
}
// concatenate
r = insert2ll(cache,argp);
if(!r) {
printf("%s", "<< Error at fn. insert2ll()");
return(0x00);
}
}
}


r = rsync_coordinates((*argp).t,argp);

if(!r) {
printf("%s", "<< Error at fn. sync_coordinates()");
return(0x00);
}

r = c_outll_partially(argp);

if(!r) {
printf("%s", "<< Error at fn. c_outll_partially()");
return(0x00);
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(r);
}
