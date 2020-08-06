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

signed(__cdecl cli_eq_tab(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed radix = (0x0A);

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cv_da(radix,&i,*(CLI_OFFSET+(R(base,R(roll,*argp)))));
if(!r) {
printf("%s\n","<< Error at fn. cv_da()");
return(0x00);
}

AND(i,0xFFFF);
if(ALIGN_TAB<(i)) i = (ALIGN_TAB);
if(i<(0x02)) i = (ALIGN_TAB);
R(align_tab,R(config,*argp)) = (i);

return(0x01);
}
