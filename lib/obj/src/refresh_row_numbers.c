/* **** Notes

Refresh row numbers

argp: Put the address of the CMDLN_STAT structure at.

Remarks:
Along with fn. refresh_row_numbers_internal
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl refresh_row_numbers(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

system("cls");

r = display_header(argp);
if(!r) printf("%s", "<< Error at fn. display_header()");

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
(*argp).cache_pos.X = ((*argp).csbi.dwCursorPosition.X);
(*argp).cache_pos.Y = ((*argp).csbi.dwCursorPosition.Y);
}

//* Aux.
if((*((*argp).t)).p) {
free((*((*argp).t)).p);
(*((*argp).t)).p = (signed char(*)) (0x00);
}
r = ct((*argp).init_p);
INC(r);
(*((*argp).t)).p = (signed char(*)) malloc(r*(sizeof(signed char)));
if(!((*((*argp).t)).p)) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}
r = cpy((*((*argp).t)).p,(*argp).init_p);
//*/

r = refresh_row_numbers_internal((*argp).b,argp);

if(!r) {
printf("%s", "<< Error at fn. refresh_row_numbers_internal()");
return(0x00);
}

return(r);
}
