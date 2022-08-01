/* **** Notes

Convert into an array

Remarks:
Call fn. rl later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_av_b(signed char(*cache),signed char(**di),signed char(**si))) {
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(!(concatenate(0x00,di,*si))) return(0x00);
si++;
if(*si) {
if(cache) {
if(!(concatenate(0x00,di,cache))) return(0x00);
}}
return(0x01+(cv_av_b(cache,di,si)));
}
