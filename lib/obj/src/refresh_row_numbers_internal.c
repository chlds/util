/* **** Notes

Refresh row numbers

argp: Put the address of the CMDLN_STAT structure at.

Remarks:
Along with fn. refresh_row_numbers
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl refresh_row_numbers_internal(KNOT(*di),signed short(n),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
// auto COORD(coord);
auto signed(cache), (r);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!argp) return(0x00);

if(0x100<(n)) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

/*
else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}
//*/

(*di).depart.Y = (n);

r = ct_txt(ALIGN_TAB,(*di).p);

cache = (0x01+((*argp).csbi.srWindow.Right));
while(0x01) {
r = (-cache+(r));
if(r<(0x01)) {
INC(n);
break;
}}

di = ((*di).d);

return(0x01+(refresh_row_numbers_internal(di,n,argp)));
}
