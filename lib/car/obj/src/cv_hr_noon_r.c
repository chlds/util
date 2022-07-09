/* **** Notes

Convert to time out of characters
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_hr_noon_r(signed short(*hr),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed meridiem = (12);
auto signed char *noon = ("noon");
if(!hr) return(0x00);
if(!argp) return(0x00);
b = (argp);
if(!(cmpr(&r,b,noon))) return(0x00);
if(r) return(0x00);
*hr = (meridiem);
return(0x01);
}
