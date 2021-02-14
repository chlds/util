/*

Press <Ctrl-M> to invoke the function.

Remarks:
Refer at util/lib/obj/src/cli_io.c
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_m(cli_property_t(*argp))) {

auto cli_page_t *page;
auto cli_rule_t *rule;
auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(DBG) r = cli_message(0x00,"<Ctrl-M> ");

/*
rule = (*(CLI_BASE+(rule,R(text,*argp))));
if(!rule) return(0x00);
b = (*(CLI_INDEX+(b,*rule)));
if(!b) return(0x00);
embed(0x00,b);
b = (*(CLI_BASE+(b,*rule)));
page = (*(CLI_INDEX+(R(page,R(spool,R(text,*argp))))));
if(!page) return(0x00);
rule = (R(rule,*page));
if(!rule) return(0x00);
r = cli_restore_rule(b,rule);
if(!r) return(0x00);
rule = (0x00);
page = (0x00);
//*/

OR(R(flag,R(text,*argp)),CLI_BR);

return(0x01);
}
