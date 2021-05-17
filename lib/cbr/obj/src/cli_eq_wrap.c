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

signed(__cdecl cli_eq_wrap(CLI_TYPEWRITER(*argp))) {

auto signed char *(operand[]) = {
("1"),
(0x00),
};

auto signed i,l,r;
auto signed short flag;

if(!argp) return(0x00);

R(wrap_words,R(config,*argp)) = (CLI_DEFAULT);

i = (0x00);
while(*(operand+(i))) {
r = cmpr_part(&l,*(CLI_OFFSET+(R(base,R(roll,*argp)))),*(operand+(i)));
if(!l) {
R(wrap_words,R(config,*argp)) = (0x01);
break;
}
i++;
}

return(0x01);
}
