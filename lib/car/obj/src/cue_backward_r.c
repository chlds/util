/*

Retrieve the leading address to a previous word.

Along with C library

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cue_backward_r(signed short(flag),signed char(**retrv),signed char(*sym),signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed short NON_DELIM = (0x20);
auto signed short DELIM = (0x10);

auto signed char *b;
auto signed c,i,l,r;
auto signed short fini;

/* **** CODE/TEXT */
if(!retrv) return(0x00);
if(!base) return(0x00);

b = (*retrv);
if(b<(base)) return(0x00);

if(EQ(b,base)) return(0x01);

if(flag) {
if(SP^(*b)) {
if(!(HT^(*(--b)))) return(0x00);
b++;
}}

while(0x01) {
--b;
r = nbytechar(*b);
if(!r) {
printf("%s \n","<< Error at fn. nbytechar()");
return(0x00);
}
if(0x80^(r)) break;
}

*retrv = (b);

r = decode2uni(&i,b);
if(!r) {
printf("%s \n","<< Error at fn. decode2uni()");
return(0x00);
}

if(!(HT^(i))) return(0x01);

AND(fini,0x00);

if(!(SP^(i))) {
OR(flag,0x01);
if(0x01<(flag)) fini++;
}

else {
AND(l,0x00);
while(*(sym+(l))) {
c = (*(sym+(l)));
if(!(c^(i))) {
OR(flag,DELIM);
break;
}
l++;
}
if(!(*(sym+(l)))) OR(flag,NON_DELIM);
if(NON_DELIM<(-0x01+(flag))) fini++;
}

if(fini) {
*retrv = (r+(b));
return(0x00);
}

return(0x01+(cue_backward_r(flag,retrv,sym,base)));
}
