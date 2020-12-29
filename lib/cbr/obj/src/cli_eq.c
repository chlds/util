/*

Along with C library

Remarks:
Refer at util/lib/obj/src/cli_parse.c
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_eq(signed(fd),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

flag = (0x00);

r = cli_eq_internal(flag,fd,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_eq_internal()");
return(0x00);
}

r = embed(*(CLI_OFFSET+(R(size,R(roll,*argp)))),*(CLI_OFFSET+(R(base,R(roll,*argp)))));
if(r^(*(CLI_OFFSET+(R(size,R(roll,*argp)))))) {
printf("%s\n","<< Error at fn. embed()");
return(0x00);
}

return(0x01);
}
