/* **** Notes

Press <Ctrl-I> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure

.align  times (1%AL(AL+(-(1%AL($))))) db (0x00)
.indent times      (AL+(-(1%AL($))))  db (0x20)
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_i_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(command_mode);

auto signed char const(HT) = (0x09);

auto signed char(*p);

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(command_mode) return(0x01);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);

r = ((*argp).count);

if(!(r^((*argp).tail))) XOR(flag,flag);

else {
XNOR(flag);
r = cpy((*argp).craft, (*argp).p);
if(!r) {
printf("%s", "<< Error at fn. cpy()");
return(0x00);
}}

*((*argp).p) = ('\t');
// *((*argp).p) = (0x09);
// *((*argp).p) = ((*argp).c);

*(0x01+((*argp).p)) = ('\0');

// External Part.
r = c_out_beta((*argp).p,argp);

if(!r) {
printf("%s", "<< Error at fn. c_out_beta()");
return(0x00);
}

((*argp).p)++;
((*argp).count)++;
((*argp).tail)++;

if(flag) {
r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
r = cpy((*argp).p,(*argp).craft);
r = c_outs_beta((*argp).p,argp);
if(!r) {
printf("%s", "<< Error at fn. c_outs_beta()");
return(0x00);
}
r = SetConsoleCursorPosition((*argp).s_out,coord);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}}


/* Refresh */
r = clearhere(argp);
if(!r) {
printf("%s", "<< Error at fn. clearhere()");
return(0x00);
}
r = cq_outs_beta((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. cq_outs_beta()");
return(0x00);
}




/* Refresh
r = ct_txt(ALIGN_TAB,(*argp).init_p);
r = (r%(0x01+((*argp).csbi.srWindow.Right)));
if(r<(ALIGN_TAB)) {
r = qclear_i(argp);
if(!r) printf("%s", "<< Error at fn. qclear_i()");
r = cq_out_i((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. cq_out_i()");
// r = qrefresh((*argp).t,argp);
// if(!r) printf("%s", "<< Error at fn. qrefresh()");
}
//*/

return(0x01);
}
