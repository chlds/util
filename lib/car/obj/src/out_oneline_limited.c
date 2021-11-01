/* **** Notes

Output only one line.

Remarks:
Return the number of bytes output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl out_oneline_limited(signed short(arg),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ct_a(argp);
if(!r) return(0x00);

arg = (arg+(0x01+(~r)));
if(arg<(0x00)) return(0x00);

r = cli_o_b(argp);
argp = (r+(argp));
if(!r) return(cli_message(0x00,"<< Error at fn. cli_o_b() \n"));

return(r+(out_oneline_limited(arg,argp)));
}
