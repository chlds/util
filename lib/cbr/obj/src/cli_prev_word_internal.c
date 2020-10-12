/*

Retrieve an address of the previous word.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_prev_word_internal(signed char(**retrv),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char HT = ('\t');
auto signed char SP = (' ');
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!retrv) return(0x00);
if(!argp) return(0x00);

b = (*retrv);
if(EQ(b,*(CLI_BASE+(R(base,R(roll,*argp)))))) return(0x01);

if(!(*b)) {
i = (0x00);
}

else {
r = decode2uni(&i,b);
if(!r) {
printf("%s \n","<< Error at fn. decode2uni()");
return(0x00);
}}

flag = (0x00);
if(i^((signed) SP)) flag = (0x01);

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

if(!(i^((signed) HT))) return(0x01);

if(flag) {
if(!(i^((signed) SP))) flag = (0x00);
}

if(!flag) {
if(i^((signed) SP)) flag = (0x01);
}

if(flag) {
if(EQ(b,*(CLI_BASE+(R(base,R(roll,*argp)))))) return(0x01);
while(0x01) {
--b;
r = nbytechar(*b);
if(!r) {
printf("%s \n","<< Error at fn. nbytechar()");
return(0x00);
}
if(0x80^(r)) break;
}
r = decode2uni(&i,b);
if(!r) {
printf("%s \n","<< Error at fn. decode2uni()");
return(0x00);
}
if(!(i^((signed) HT))) return(0x01);
if(!(i^((signed) SP))) return(0x01);
}

return(0x01+(cli_prev_word_internal(retrv,argp)));
}
