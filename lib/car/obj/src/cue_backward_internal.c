/*

Retrieve the leading address to a previous word.

Along with C library

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# define CAR
# include "../../../incl/config.h"
# include <stdio.h>

signed(__cdecl cue_backward_internal(signed short(flag),signed char(**retrv),signed char(*sym),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed char HT = ('\t');
static signed char SP = (' ');

auto signed short NON_DELIM = (0x20);
auto signed short DELIM = (0x10);

auto signed char *p;
auto signed long long ll;
auto signed i,l,r;
auto signed short fini;

/* **** CODE/TEXT */
if(!retrv) return(0x00);
if(!base) return(0x00);

p = (*retrv);
if(p<(base)) return(0x00);

ll = (signed long long) (p);
if(!(ll^((signed long long) base))) return(0x01);

if(flag) {
if(SP^(*p)) {
if(!(HT^(*(--p)))) return(0x00);
else p++;
}}

while(0x01) {
--p;
r = nbytechar(*p);
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}
if(0x80^(r)) break;
}

*retrv = (p);

r = decode2uni(&i,p);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}

if(!(i^((signed) HT))) return(0x01);

fini = (0x00);

if(!(i^((signed) SP))) {
OR(flag,0x01);
if(0x01<(flag)) fini++;
}

else {
l = (0x00);
while(*(sym+(l))) {
if(!(i^((signed) *(sym+(l))))) {
OR(flag,DELIM);
break;
}
l++;
}
if(!(*(sym+(l)))) OR(flag,NON_DELIM);
if(NON_DELIM<(-0x01+(flag))) fini++;
}

if(fini) {
*retrv = (r+(p));
return(0x00);
}

return(0x01+(cue_backward_internal(flag,retrv,sym,base)));
}
