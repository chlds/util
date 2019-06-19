/* **** Notes

Press <Ctrl-L> to invoke the function.

in the Command Mode

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


/*
# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"
//*/

signed(__cdecl cmd_ctrl_l(void(*argp))) {

return(0x01);
}
