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

signed(__cdecl cli_eq_frame(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *(pos[]) = {
(signed char(*)) ("default"),
(signed char(*)) ("left"),
(signed char(*)) ("center"),
(signed char(*)) ("right"),
(signed char(*)) (0x00),
};

auto signed POS[] = {
CLI_DEFAULT,
CLI_LEFT,
CLI_CENTER,
CLI_RIGHT,
0x00,
};

auto signed i,l,r;
auto signed lim;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

i = (0x00);
while(*(pos+(i))) {
i++;
}
lim = (i);
--lim;

i = (0x00);
while(*(pos+(i))) {
r = cmpr_parts(&l,*(CLI_OFFSET+(R(base,R(roll,*argp)))),*(pos+(i)));
if(!l) {
R(compact_frame,R(config,*argp)) = (i);
break;
}
i++;
}

if(lim<(i)) R(compact_frame,R(config,*argp)) = (CLI_DEFAULT);

return(0x01);
}
