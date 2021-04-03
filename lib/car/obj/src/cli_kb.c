/* **** Notes

Along with C and Windows libraries

Remarks:
Build a doubly linked list
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_kb(cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto cli_text_t *t;
auto cli_rule_t *rule;
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CLI_INIT&(*(CLI_BASE+(R(flag,*argp)))))) return(0x00);

if(CLI_QUIT&(R(flag,R(text,*argp)))) return(0x01);

AND(flag,0x00);
OR(flag,CLI_PBR);
OR(flag,CLI_BR);
if(flag&(R(flag,R(text,*argp)))) return(0x01);

r = cli_kb_r(argp);
if(!r) {
r = cli_message(r,"<< Error at fn. cli_kb_r() \n");
return(0x00);
}

/*
r = clear_rows(0x00);
if(!r) {
r = cli_message(r,"<< Error at fn. clear_rows() \n");
return(0x00);
}
//*/

return(0x01);
}
