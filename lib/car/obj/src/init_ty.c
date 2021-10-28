/* **** Notes

Initialise

Remarks:
Refer at fn. cli_restore.
*/


# define CLI_SYMB
# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_ty(signed(arg),ty_t(*argp))) {

auto signed char *b;
auto config_t *config;
auto rule_t *rule;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

// initialise
flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) AND(arg,0x00);

config = (&(R(config,*argp)));
r = init_config(arg,config);
if(!r) {
printf("%s \n","<< Error at fn. init_config()");
return(0x00);
}

page = (&(R(page,*argp)));
r = init_pages(arg,page);
if(!r) {
printf("%s \n","<< Error at fn. init_pages()");
return(0x00);
}

rule = (R(rule,*argp));
r = init_rule(arg,CLI_RULE,rule);
if(!r) {
printf("%s \n","<< Error at fn. init_rule()");
return(0x00);
}

r = (OBJS);
while(r) AND(*(--r+(R(flag,*argp))),0x00);
if(!arg) {
*(CLI_BASE+(R(b,*config))) = (CUE_SYM);
OR(*(CLI_BASE+(R(flag,*argp))),CLI_INIT);
}

rule = (0x00);
page = (0x00);
config = (0x00);

return(0x01);
}
