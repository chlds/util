/*

Press <Ctrl-L> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_l(cli_property_t(*argp))) {

auto signed char *b;
auto cli_rule_t *rule;
auto cli_text_t *text;
auto signed i,r;
auto signed short flag;

if(DBG) printf("%s ","<Ctrl-L>");

r = cli_clip_to_empty_beta();
if(!r) return(0x00);

return(0x01);
}
