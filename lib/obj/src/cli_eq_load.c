/*

Rewrite without loading the content if the operand is "none".

Remarks:
Refer at util/lib/obj/src/cli_parse.c
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_eq_load(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *operand = ("none");

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cmpr_parts(&i,*(CLI_OFFSET+(R(base,R(roll,*argp)))),operand);
if(!r) {
printf("%s\n","<< Error at fn. cmpr_parts()");
return(0x00);
}

if(!i) R(load_file,R(config,*argp)) = (0x00);
else R(load_file,R(config,*argp)) = (0x01);

return(0x01);
}
