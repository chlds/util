/* **** Notes

Press <Ctrl-M> to invoke the function.

Line Feed (0x0D)

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_m(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);
extern signed(command_mode);
extern signed(cmd_io_terminate);

auto signed(cache), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cpy((*argp).craft,(*argp).p);

*((*argp).p) = (signed char) ('\0');

/*
cache = ((*argp).tail);
*(cache+((*argp).init_p)) = (0x00);
//*/

if(command_mode) {
cache = ((*argp).cmd_io.tail);
*(cache+((*argp).cmd_io.p)) = (0x00);
XNOR(cmd_io_terminate);
return(0x01);
}

terminate++;

return(0x01);
}
