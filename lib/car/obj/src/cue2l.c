/*

Retrieve bytes to the leading address of a word to wrap words.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue2l(signed char(*sym),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char HT = ('\t');
auto signed char SP = (' ');

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed char c,old;

/* **** CODE/TEXT */
if(!sym) return(0x00);
if(!argp) return(0x00);

c = (*argp);
if(!c) return(0x00);

old = (c);
flag = (0x00);
i = (0x00);
while(*(sym+(i))) {
if(!(c^(*(sym+(i++))))) flag = (0x01);
}

argp++;
c = (*argp);
if(!(HT^(c))) return(0x01);

i = (0x00);
while(*(sym+(i))) {
if(!(c^(*(sym+(i++))))) flag = (0x00);
}

if(!(SP^(c))) flag = (0x00);

else {
if(!(HT^(old))) flag = (0x01);
if(!(SP^(old))) flag = (0x01);
}

if(flag) return(0x01);

return(0x01+(cue2l(sym,argp)));
}
