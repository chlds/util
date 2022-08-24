/* **** Notes

Align

Remarks:
Refer at fn. cumul_va and fn. rule_va
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl align_va(signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
AND(r,0x00);
OR(r,OBJS);
b = (*(CLIH_BASE+(argp)));
if(!b) return(0x00);
while(r) *(--r+(argp)) = (b);
return(0x01);
}
