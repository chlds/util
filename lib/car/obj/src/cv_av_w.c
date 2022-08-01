/* **** Notes

Convert into an array

Remarks:
Call fn. rl later
Based on UTF-16
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_av_w(signed short(*cache),signed short(**di),signed short(**si))) {
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(!(concatenate_w(0x00,di,*si))) return(0x00);
si++;
if(*si) {
if(cache) {
if(!(concatenate_w(0x00,di,cache))) return(0x00);
}}
return(0x01+(cv_av_w(cache,di,si)));
}
