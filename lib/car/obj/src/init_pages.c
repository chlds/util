/* **** Notes

Initialise

Remarks:
Refer at fn. cli_restore.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_pages(signed(arg),page_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

// initialise
flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) AND(arg,0x00);

rule = (R(rule,*argp));
r = init_rule(arg,CLI_RULE,&rule);
if(!r) {
printf("%s \n","<< Error at fn. init_rule()");
return(0x00);
}

AND(flag,0x00);
page = (0x00);
r = (PAGES);
while(r) *(--r+(R(page,*argp))) = (page);
r = (FLAGS);
while(r) *(--r+(R(flag,*argp))) = (flag);

OR(*(CLI_BASE+(R(flag,*argp))),CLI_INIT);

return(0x01);
}
