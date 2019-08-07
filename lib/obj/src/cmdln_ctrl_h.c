/* **** Notes

Press <Ctrl-H> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_h(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
/*
auto signed char const(HT) = (0x09);

auto COORD(coord);
//*/

auto signed(cache), (i), (r);

/*
auto signed short(flag);
auto signed char(c);
//*/

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cmdln_ctrl_b(argp);
if(!r) printf("%s", "<< Error at fn. cmdln_ctrl_b() in fn. cmdln_ctrl_h()");

r = cmdln_ctrl_d_beta(argp);
if(!r) printf("%s", "<< Error at fn. cmdln_ctrl_d_beta() in fn. cmdln_ctrl_h()");

return(0x01);
}
