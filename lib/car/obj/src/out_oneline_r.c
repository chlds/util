/* **** Notes

Output only one line.

Remarks:
Return the number of bytes output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl out_oneline_r(signed(n),signed short(arg/* align */),signed char(**argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(n<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = cli_outs_b(arg,*argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_outs_b()");
return(0x00);
}

--n;
argp++;

return(r+(out_oneline_r(n,arg,argp)));
}
