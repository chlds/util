/* **** Notes

Cumulate

Remarks:
Refer at fn. align_va and fn. rule_va
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cumul_va(signed(dif),signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(dif<(0x00)) return(0x00);
if(!arg) return(0x00);
if(!(arg<(OBJS))) return(0x00);
if(!argp) return(0x00);
AND(r,0x00);
OR(r,dif);
b = (*(arg+(argp)));
INC(r);
while(--r) INC(b);
*(arg+(argp)) = (b);
arg++;
return(0x01+(cumul_va(dif,arg,argp)));
}
