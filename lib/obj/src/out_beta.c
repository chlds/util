/* **** Notes

Console output
Output a tab as whitespace

Using fn. c_outs_beta e.g., to output remaining string after inserting a character.
Compare fn. c_outs_beta with fn. _putch/_putwch.
Also refer at fn. vu_beta_internal for fn. out_beta.

Remarks:
Launch on vu.exe
Use fn. c_out_beta (along with fn. c_out_ht_beta and fn. c_out_ht_beta_internal)
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl out_beta(signed char(*base),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
static signed char const HT = ('\t');
auto COORD coord,coord_b;
auto signed char *p;
auto signed c,i,r,len,len_b;
auto signed short cols, flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
coord_b.X = (coord.X);
coord_b.Y = (coord.Y);

cols = (0x01+((*argp).csbi.srWindow.Right));

len = ct_word_internal(base);
r = (coord.X+(len));

if(r<(cols)) flag = (0x00);
else flag = (0x01);

if(flag) {
r = cpy2p((*argp).craft,(*argp).p,(*argp).init_p);
if(!r) {
printf("%s", "<< Error at fn. cpy2p()");
return(0x00);
}
len_b = ct_word_backward(r,base);
r = (len+(len_b));
if(r<(cols)) XNOR(flag);
else XOR(flag,flag);
len = (r);
}


/* There is (a lot of) room for improvement. */
/* e.g., use another function using fn. _putch/_putwch to simply output remaining string after inserting a character. */
r = c_outs_beta(base,argp);


if(flag) {
INC(coord_b.Y);
coord_b.X = (len_b);
}

r = SetConsoleCursorPosition((*argp).s_out,coord_b);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
