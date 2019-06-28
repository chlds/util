/* **** Notes

Console output

Output a tab as whitespace

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl c_out_ht(signed(di), CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);
auto signed char(ws) = (' ');

/* **** CODE/TEXT */
if(di<(0x00)) return(0x00);
if(!di) return(0x00);
if(!argp) return(0x00);

r = c_out(&ws,argp);

DEC(di);

return(0x01+(c_out_ht(di,argp)));
}
