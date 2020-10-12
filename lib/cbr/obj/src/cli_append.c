/*

Append.

Along with C library

Remarks:
Return the number of copied bytes.
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_append(signed char(*appendant),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!appendant) return(0x00);
if(!argp) return(0x00);

b = (*(CLI_INDEX+(R(cur,*argp))));

r = cpy(*(CLI_OFFSET+(R(base,R(roll,*argp)))),b);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

r = cpy(b,appendant);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

i = (r);

while(r) {
b++;
--r;
}

r = cpy(b,*(CLI_OFFSET+(R(base,R(roll,*argp)))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

return(i);
}
