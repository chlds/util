/* **** Notes

Press <Ctrl-C> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_c(void(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(command_mode);
extern signed(quit);
extern signed(terminate);

auto signed(i), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

XNOR(terminate);
XNOR(quit);

// printf("%s", "Ctrl-C;");

return(0x01);
}
