/* **** Notes

Initialise
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl clear_k_b(signed(arg),signed(*y),signed(*offs),signed char(**argp))) {
auto signed r;
if(arg<(0x01)) return(0x00);
if(!y) return(0x00);
if(!offs) return(0x00);
if(!argp) return(0x00);
r = (arg);
while(r) *(--r+(y)) = (0x00);
r = (arg);
while(r) *(--r+(offs)) = (0x00);
if(!(EQ(arg,init_va(arg/* or 0x01.. */,arg,argp)))) return(0x00);
return(arg);
}
