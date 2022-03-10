/* **** Notes

Initialise.

Remarks:
Refer at fn. init_rule_b.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_paragraph(signed(arg),paragraph_t(*argp))) {

auto signed char *b;
auto rule_t *rule;
auto paragraph_t *paragraph;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

// initialise
flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) AND(arg,0x00);

rule = (&(R(rule,*argp)));
if(!(init_rule_b(arg,rule))) return(0x00);

AND(flag,0x00);
paragraph = (0x00);
r = (CLI_OBJS);
while(r) *(--r+(R(paragraph,*argp))) = (paragraph);
r = (CLI_OBJS);
while(r) *(--r+(R(flag,*argp))) = (flag);

OR(*(CLI_BASE+(R(flag,*argp))),CLI_INIT);

return(0x01);
}
