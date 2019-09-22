/* **** Notes

Console no output

Not output a tab as whitespace

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
Derived out of fn. c_out_ht
Based on fn. c_out_ht_beta_internal
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_noout_ht_beta_internal(signed(di),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);
auto signed char(ws) = (' ');

/* **** CODE/TEXT */
if(di<(0x00)) return(0x00);
if(!di) return(0x00);
if(!argp) return(0x00);

r = c_noout_ht_beta(&ws,argp);
// Based on fn. c_out

DEC(di);

return(0x01+(c_noout_ht_beta_internal(di,argp)));
}
