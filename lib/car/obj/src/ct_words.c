/* **** Notes

Count words to the terminating null character

Remarks:
Refer at fn. ct_wrds
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_words(signed char(*sym),signed char(*base))) {
auto signed short flag;
auto signed retv;
auto signed r;
if(!sym) return(0x00);
if(!base) return(0x00);
AND(flag,0x00);
AND(retv,0x00);
r = ct_words_r(flag,&retv,sym,base);
if(!r) return(0x00);
return(retv);
}
