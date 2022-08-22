/* **** Notes

Rule

Remarks:
Refer at fn. init_va
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl rule_va(signed(dif),signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(dif<(0x00)) return(0x00);
if(arg<(0x00)) return(0x00);
if(OBJS<(arg)) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
AND(r,0x00);
OR(r,OBJS);
b = (*(CLIH_BASE+(argp)));
while(r) *(--r+(argp)) = (b);
if(!dif) return(OBJS);
if(!arg) return(OBJS);
return(rule_va_r(dif,arg,argp));
}
