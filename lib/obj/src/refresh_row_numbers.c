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

r = refresh_row_numbers_internal((*argp).b,argp);

if(!r) {
printf("%s", "<< Error at fn. refresh_row_numbers_internal()");
return(0x00);
}

return(r);
}
