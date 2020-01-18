/*

Retrieve the leading address to a previous word.

Along with C library

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# include <stdio.h>
# include "../../../incl/cl.h"

signed(__cdecl cue_backward_internal(signed short(flag),signed char(**retrv),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed char HT = ('\t');
static signed char SP = (' ');

auto signed char delim[] = {
HT,SP,0x00,
};

auto signed char *p;
auto signed long long ll;
auto signed i,l,r;

/* **** CODE/TEXT */
if(!retrv) return(0x00);
if(!base) return(0x00);

p = (*retrv);
if(p<(base)) return(0x00);

ll = (signed long long) (p);
if(!(ll^((signed long long) base))) return(0x00);

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

if(flag) {
l = (0x00);
while(*(delim+(l))) {
if(!(i^((signed) *(delim+(l++))))) {
*retrv = (r+(p));
return(0x00);
}}}

if(!(i^((signed) HT))) return(0x01);

if(!(i^((signed) SP))) flag = (0x00);
else flag = (0x01);

return(0x01+(cue_backward_internal(flag,retrv,base)));
}
