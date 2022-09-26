/* **** Notes

Queue

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl queue_backward(signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (*argp);
r = ct_a_back(b);
if(!r) return(0x00);
b = dupl_backward(b);
if(!b) return(b);
if(!(embedback(r,*argp))) {
embed(0x00,b);
rl(b);
b = (0x00);
}
return(b);
}
