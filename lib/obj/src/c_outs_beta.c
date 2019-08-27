/* **** Notes

Console output

Output characters.
Output a tab as whitespace

Remarks:
Based on fn. c_out
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure

Use fn. c_out_beta (along with fn. c_out_ht_beta and fn. c_out_ht_beta_internal)
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_outs_beta(signed char(*di),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(HT) = (0x09);

auto COORD(coord);
auto signed(cache), (r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!di) return(0x00);
if(!(*di)) return(0x00);

r = c_out_beta(di,argp);

if(!r) {
}

INC(di);

return(r+(c_outs_beta(di,argp)));
}
