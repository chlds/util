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

signed(__cdecl cli_eq_monitor(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *operand = ("1");

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cmpr_parts(&i,*(CLI_OFFSET+(R(base,R(roll,*argp)))),operand);
if(!r) {
printf("%s\n","<< Error at fn. cmpr_parts()");
return(0x00);
}

if(!i) R(debug_monitor,R(config,*argp)) = (0x01);
else R(debug_monitor,R(config,*argp)) = (0x00);

return(0x01);
}
