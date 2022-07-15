/* **** Notes

Concatenate and release

Remarks:
Call fn. rl later
Refer at fn. cv and cx
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cat_ahead(signed char(*di),signed char(*si))) {
auto signed char *b;
if(!di) return(0x00);
if(!si) return(0x00);
b = (0x00);
if(!(cat_b(&b,si,di,(void*)0x00))) b = (0x00);
embed(0x00,di);
rl(di);
di = (0x00);
return(b);
}
