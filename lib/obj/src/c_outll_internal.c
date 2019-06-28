/* **** Notes

Console output

Output character lines.

Output a tab as whitespace

Remarks:
Based on fn. c_out
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_outll_internal(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);

r = c_outs((*k).p,argp);

/* It is empty ..or has occurred an error.
if(!r) {
}
//*/

k = ((*k).d);

if(k) printf("\n");

return(0x01+(c_outll_internal(k,argp)));
}
