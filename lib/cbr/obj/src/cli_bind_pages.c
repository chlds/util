/* **** Notes

Concatenate pages after allocating a memory block for structure cli_page_t.

Remarks:
Build a doubly linked list
Along with C library
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_bind_pages(cli_spool_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_rule_t *rule;
auto cli_page_t *page;
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = (0x01*(sizeof(*page)));
page = (cli_page_t(*)) malloc(r);
if(!page) {
r = cli_message(r,"<< Error at fn. malloc() \n");
return(0x00);
}

AND(R(redo,R(history,*page)),0x00);
AND(R(undo,R(history,*page)),0x00);
AND(R(insert,R(history,*page)),0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(snapshot,R(history,*page)))) = (0x00);

AND(R(offset,*page),0x00);
AND(R(flag,*page),0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(base,*page))) = (0x00);


r = (0x01*(sizeof(*rule)));
rule = (cli_rule_t(*)) malloc(r);
if(!rule) {
r = cli_message(r,"<< Error at fn. malloc() \n");
return(0x00);
}
r = cli_init_rule(0x00,rule);
if(!r) {
r = cli_message(r,"<< Error at fn. cli_init_rule() \n");
return(0x00);
}
R(rule,*page) = (rule);
rule = (0x00);


r = cli_concat_pages(page,argp);
if(!r) {
r = cli_message(r,"<< Error at fn. cli_concat_pages() \n");
return(0x00);
}

return(0x01);
}
