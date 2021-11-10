/* **** Notes

Output only one line.

Remarks:
Return the number of bytes output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl out_argt_line_r(signed(n),signed char(**argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(n<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = cli_outs_b(0x08,*argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_outs_b()");
return(0x00);
}

argp++;
if(--n) printf(" ");

return(0x01+(out_argt_line_r(n,argp)));
}
