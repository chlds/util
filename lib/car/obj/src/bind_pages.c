/* **** Notes

Concatenate pages after allocating a memory block for structure page_t.

Remarks:
Build a doubly linked list
Refer at fn. unbind_pages.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl bind_pages(signed short(arg),page_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
if(b) return(0x00);

rule = (CLI_BASE+(R(rule,*argp)));
b = (*(CLI_BASE+(R(b,*rule))));
if(b) return(0x00);

r = (0x01*(sizeof(*page)));
page = (page_t(*)) alloc(r);
if(!page) {
printf("%s \n","<< Error at fn. alloc()");
return(0x00);
}

r = init_pages(0x00,page);
if(!r) {
printf("%s \n","<< Error at fn. init_pages()");
return(0x00);
}

OR(*(CLI_BASE+(R(flag,*page))),arg);
r = concat_pages(0x00/* i.e., in a doubly LL */,argp,page);
if(!r) {
printf("%s \n","<< Error at fn. concat_pages()");
return(0x00);
}

return(r);
}
