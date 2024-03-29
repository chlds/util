/* **** Notes

Rule

Remarks:
Refer at fn. cumul_va and fn. align_va
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl rule_va(signed(dif),signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(dif<(0x00)) return(0x00);
if(arg<(0x00)) return(0x00);
if(!(arg<(OBJS))) return(0x00);
if(!argp) return(0x00);
if(!(align_va(argp))) return(0x00);
if(!dif) return(OBJS);
if(!arg) return(OBJS);
return(cumul_va(dif,arg,argp));
}
