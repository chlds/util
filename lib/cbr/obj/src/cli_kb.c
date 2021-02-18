/* **** Notes

Along with C and Windows libraries

Remarks:
Build a doubly linked list
Based on UTF-8
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
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

if(CLI_PBR&(R(flag,R(text,*argp)))) flag = (0x01);
else flag = (0x00);

r = cli_io(argp);
if(!r) {
r = cli_message(r,"<< Error at fn. cli_io() \n");
return(0x00);
}

// if(CLI_MONO) return(0x01);
if(CLI_MONO) system("cls");

r = clear_rows(0x00);
if(!r) {
r = cli_message(r,"<< Error at fn. clear_rows() \n");
return(0x00);
}

return(0x01);
}
