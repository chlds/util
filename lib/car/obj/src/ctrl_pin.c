/*

Copy to the clipboard.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_pin(ty_t(*argp))) {

auto signed char *b;
auto signed short *w;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

/* currently under construction
r = clip_to_empty_beta();
if(!r) return(0x00);

AND(flag,0x00);
OR(flag,CLI_PINNED);
OR(*(CLI_OFFSET+(R(flag,*argp))),flag);
r = ctrl_pin_r(argp);
if(!r) {
cli_message(r,"<< Error at fn. ctrl_pin_r() \n");
NOT(flag);
AND(*(CLI_OFFSET+(R(flag,*argp))),flag);
}
//*/

// return(r);
return(0x01);
}
