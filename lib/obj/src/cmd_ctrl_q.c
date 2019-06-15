/* **** Notes

Press <Ctrl-Q> to invoke the function.

in the Command Mode

Quit.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmd_ctrl_q(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);
extern signed(command_mode);
extern signed(cmd_io_terminate);

auto COORD(coord);
auto signed(i), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

XNOR(quit);
XNOR(terminate);
XNOR(cmd_io_terminate);

// printf("%s", "Ctrl-Q;");

return(0x01);
}
