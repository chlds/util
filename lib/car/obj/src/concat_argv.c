/* **** Notes

Concatenate

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl concat_argv(signed(offset),signed char(**di),signed char(**si))) {
auto signed char *b;
auto signed i,r;
if(offset<(0x00)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = (offset);
while(r) if(!(*(--r+(si)))) return(0x00);
r = ct_av_b(&i,offset+(si));
if(!r) return(0x00);
r = (i+(r));
// r++;
r = (r*(sizeof(**di)));
b = (signed char(*)) alloc(r);
*di = (b);
if(!b) return(0x00);
if(!(cpy_av_b(b,offset+(si)))) {
rl(b);
b = (0x00);
*di = (b);
return(0x00);
}
return(r);
}
