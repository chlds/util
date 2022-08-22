/* **** Notes

Rule
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl rule_va_r(signed(dif),signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!(arg<(OBJS))) return(0x00);
if(!argp) return(0x00);
AND(r,0x00);
OR(r,dif);
b = (*(arg+(argp)));
INC(r);
while(--r) INC(b);
*(arg+(argp)) = (b);
arg++;
return(0x01+(rule_va_r(dif,arg,argp)));
}
