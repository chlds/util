/*

Retrieve bytes to the leading address of a word.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl deviate(signed char(*sym),signed char(*base),signed char(*index))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!sym) return(0x00);
if(!base) return(0x00);
if(!index) return(0x00);

i = (0x00);

while(0x01) {
if(!(compare(index,base))) break;
r = cue2l(sym,base);
if(!r) break;
base = (r+(base));
i = (r+(i));
}

if(!i) return(0x00);

r = (-r+(i));

return(r);
}
