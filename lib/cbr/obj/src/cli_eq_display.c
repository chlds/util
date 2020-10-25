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

signed(__cdecl cli_eq_display(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *(operand[]) = {
("default"),
("simple"),
("none"),
(0x00),
};

auto signed i,l,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

R(display_header,R(config,*argp)) = (CLI_DEFAULT);

i = (0x00);
while(*(operand+(i))) {
r = cmpr_parts(&l,*(CLI_OFFSET+(R(base,R(roll,*argp)))),*(operand+(i)));
if(!l) {
R(display_header,R(config,*argp)) = (i);
break;
}
i++;
}

return(0x01);
}
