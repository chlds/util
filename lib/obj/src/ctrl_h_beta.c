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

signed(__cdecl ctrl_h_beta(CMDLN_STAT(*argp))) {

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

r = ctrl_b_beta(argp);
if(!r) printf("%s", "<< Error at fn. ctrl_b_beta() in fn. ctrl_h_beta()");

r = ctrl_d_beta(argp);
if(!r) printf("%s", "<< Error at fn. ctrl_d_beta() in fn. ctrl_h_beta()");

return(0x01);
}
