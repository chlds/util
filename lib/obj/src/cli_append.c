/*

Append.

Along with C library

Remarks:
Return the number of copied bytes.
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_append(signed char(*appendant),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed long long sll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!appendant) return(0x00);
if(!argp) return(0x00);

p = (*(CLI_INDEX+(R(cur,*argp))));

r = cpy(*(CLI_OFFSET+(R(base,R(roll,*argp)))),p);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

r = cpy(p,appendant);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

i = (r);

while(r) {
p++;
--r;
}

r = cpy(p,*(CLI_OFFSET+(R(base,R(roll,*argp)))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

return(i);
}
