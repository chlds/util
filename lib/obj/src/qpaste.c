/* **** Notes

Quickly paste out of the clipboard.

Remarks:
Along with fn. cmdln_ctrl_p_beta
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


(*argp).count = (0x00);
(*argp).tail = (0x00);
(*argp).p = ((*argp).init_p);


r = cpy2('\n',(*argp).init_p,base);

if(!(*(r+(base)))) {
(*argp).p = (r+((*argp).init_p));
ADD((*argp).count,r);
ADD((*argp).tail,r);
r = append2((*argp).p,(*argp).craft);
ADD((*argp).tail,r);
if(!(-'\n'+(*(-0x01+(r+((*argp).init_p)))))) flag = (0x01); // ends with LF (0x0A).
else XNOR(flag); // not ends with LF.
}

else XOR(flag,flag);


if(!flag) {
base = (0x01+(r+(base)));
if(!(-'\r'+(*(-0x01+(r+((*argp).init_p)))))) {
DEC(r);
*(r+((*argp).init_p)) = ('\0');
}
(*argp).p = (r+((*argp).init_p));
ADD((*argp).count,r);
ADD((*argp).tail,r);
}


cache = (KNOT*) malloc(0x01*(sizeof(KNOT)));

if(!cache) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}

r = ct((*argp).init_p);
INC(r);
(*cache).p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!((*cache).p)) {
printf("%s", "<< Error at fn. malloc the second()");
return(0x00);
}

r = cpy((*cache).p,(*argp).init_p);

if(!r) {
// empty or..
}


/* Flag on a knot that ends with the (genuine) line break */
(*cache).linefeed = (0x01);

if(flag) {
if(!(0x01+(flag))) (*cache).linefeed = (0x00);
}


r = insert2ll(cache,argp);

if(!r) {
printf("%s", "<< Error at fn. insert2ll()");
return(0x00);
}


if(flag) return(0x01);

return(0x01+(qpaste(base,argp)));
}
