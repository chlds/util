/* **** Notes

Press <Ctrl-\> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_bslash(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(cache), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = output_ll((*argp).b);

// printf("%s", "Ctrl-\\;");

return(0x01);
}
