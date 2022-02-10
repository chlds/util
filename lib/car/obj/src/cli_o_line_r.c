/* **** Notes

Output only one line.

Remarks:
Return the number of bytes output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_o_line_r(signed short(cols),signed short(arg/* align */),signed char(**argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(cols<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ct(*argp);
if(EQ(HT,**argp)) r = cli_reckon(arg);
if(!r) return(0x00);

cols = (cols+(0x01+(~r)));
if(cols<(0x00)) return(0x00);
if(EQ(LF,**argp)) AND(cols,0x00);

r = cli_outs_b(arg,*argp);
argp++;
if(!r) {
printf("%s \n","<< Error at fn. cli_outs_b()");
return(0x00);
}

return(r+(cli_o_line_r(cols,arg,argp)));
}
