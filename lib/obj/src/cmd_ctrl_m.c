/* **** Notes

Press <Ctrl-M> to invoke the function.

Line Feed (0x0D)

in the Command Mode

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmd_ctrl_m(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(cmd_io_terminate);
auto signed(r);

/* **** CODE/TEXT */
r = ((*argp).cmd_io.tail);
*(r+((*argp).cmd_io.p)) = (0x00);

XNOR(cmd_io_terminate);

return(0x01);
}
