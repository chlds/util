/*

Press <Ctrl-R> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_r_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char HT = ('\t');
auto signed char SP = (' ');
auto signed char *cur,*p;
auto signed long long sll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-R>");

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
sll = ((signed long long) p);
if(!(sll^((signed long long) *(CLI_BASE+(R(base,R(roll,R(ty,*argp)))))))) return(0x01);

flag = (0x00);

c = (*p);
if(SP^(c)) flag = (0x01);

r = cli_ctrl_b_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_b_beta()");
return(0x00);
}

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
c = (*p);
if(!(HT^(c))) return(0x01);

if(flag) {
if(!(SP^(c))) flag = (0x00);
}

if(!flag) {
if(SP^(c)) flag = (0x01);
}

if(flag) {
sll = ((signed long long) p);
if(!(sll^((signed long long) *(CLI_BASE+(R(base,R(roll,R(ty,*argp)))))))) return(0x01);
while(0x01) {
--p;
r = nbytechar(*p);
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}
if(0x80^(r)) break;
}
r = decode2uni(&i,p);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}
if(!(i^((signed) HT))) return(0x01);
if(!(i^((signed) SP))) return(0x01);
}

return(0x01+(cli_ctrl_r_beta(argp)));
}
