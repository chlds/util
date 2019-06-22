/* **** Notes

Output character lines out of the argument

argp: Put the address of the CMDLN_STAT structure at.

Remarks:
Refer at fn. output_ll
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl refresh_screen(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

system("cls");

r = display_header(argp);

if(!r) printf("%s", "<< Error at fn. display_header()");

r = refresh_screen_internal((*argp).b,argp);

if(!r) {
printf("%s", "<< Error at fn. refresh_screen_internal()");
return(0x00);
}

return(r);
}
