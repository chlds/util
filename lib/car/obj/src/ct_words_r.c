/* **** Notes

Count words to the terminating null character
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_words_r(signed short(flag),signed(*retv),signed char(*cache),signed char(*base))) {
auto signed r;
auto signed short second = (0x02);
auto signed short first = (0x01);
auto signed char sym[] = {
SP,HT,0x00,
};
if(!retv) return(0x00);
if(!cache) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x00);
AND(flag,(~second));
r = ord(cache,*base);
if(r<(ct(cache))) OR(flag,second);
r = ord(sym,*base);
if(r<(ct(sym))) OR(flag,second);
if(flag&(second)) AND(flag,(~first));
if(!(flag&(second|(first)))) {
OR(flag,first);
INC(*retv);
}
base++;
return(0x01+(ct_words_r(flag,retv,cache,base)));
}
