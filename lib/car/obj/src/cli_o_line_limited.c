/* **** Notes

Output only one line.

Remarks:
Return the number of bytes output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_o_line_limited(signed short(cols),signed short(arg/* align */),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(cols<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(arg<(0x01)) arg = (0x08);
if(0x08<(arg)) arg = (0x08);

r = ct_a(argp);
if(EQ(HT,*argp)) r = cli_reckon(arg);
if(!r) return(0x00);

cols = (cols+(0x01+(~r)));
if(cols<(0x00)) return(0x00);

r = cli_out_b(0x08,argp);
argp = (r+(argp));
if(!r) return(cli_message(0x00,"<< Error at fn. cli_out_b() \n"));

return(r+(cli_o_line_limited(cols,arg,argp)));
}
