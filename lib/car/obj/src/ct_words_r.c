/* **** Notes

Count words to the terminating null character.

Remarks:
Refer at fn. ct_wrds_r.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_words_r(signed short(flag),signed(*retv),signed char(*cache),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed short second = (0x02);
static signed short first = (0x01);
static signed char sym[] = {
SP,HT,0x00,
};
auto signed r;

/* **** CODE/TEXT */
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
