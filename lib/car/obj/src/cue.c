/*

Retrieve bytes to the leading address of a word or symbol.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue(signed char(*sym),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed c,old;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!sym) return(0x00);
if(!argp) return(0x00);

c = (signed) (*argp);
if(!c) return(0x00);

old = (c);
AND(flag,0x00);
AND(i,0x00);
while(*(sym+(i))) {
r = (signed) (*(sym+(i++)));
if(!(c^(r))) flag = (0x01);
}

argp++;
c = (signed) (*argp);
if(!(HT^(c))) return(0x01);

AND(i,0x00);
while(*(sym+(i))) {
r = (signed) (*(sym+(i++)));
if(!(c^(r))) {
if(!flag) flag = (0x01);
else AND(flag,0x00);
break;
}}

if(!(SP^(c))) AND(flag,0x00);
else {
if(!(HT^(old))) flag = (0x01);
if(!(SP^(old))) flag = (0x01);
}

if(flag) return(0x01);

return(0x01+(cue(sym,argp)));
}
