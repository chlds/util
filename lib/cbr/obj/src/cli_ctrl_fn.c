/* **** Notes

Output characters in UTF-8 after decoding Unicode bytes input out of the key board.

Remarks:
Based on UTF-8
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_fn(signed(arg),cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed DEL = (0x7F);

auto cli_text_t *t;
auto cli_b_t *b;
auto cli_b_t *p;
auto signed char *cur;
auto signed dif;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!(arg^(DEL))) arg = (CTRL_D);
if(!(arg<(0x20))) return(0x00);
if(!argp) return(0x00);

t = (&(R(text,*argp)));

/*
p = (&(R(append,*t)));
r = cli_init_rule(0x01,p);
if(!r) {
printf("%s%d%s \n","<< Error at fn. cli_init_rule()");
return(0x00);
}
b = (&(R(b,*t)));
cur = (*(CLI_INDEX+(R(base,*b))));
if(!cur) return(0x00);
r = cli_restore_rule(cur,p);
if(!r) {
printf("%s%d%s \n","<< Error at fn. cli_restore_rule()");
return(0x00);
}
//*/

b = (&(R(b,*t)));
cur = (*(CLI_INDEX+(R(base,*b))));
if(!cur) return(0x00);

r = embed(0x00,cur);

p = (&(R(append,*t)));
cur = (*(CLI_BASE+(R(base,*p))));
// if(!cur) return(0x00);

r = cli_restore_rule(cur,b);
if(!r) {
printf("%s \n","<< Error at fn. cli_restore_rule()");
return(0x00);
}

r = cli_ctrl_fn_internal(arg,argp);
if(!r) {
printf("%s%d%s \n","<< Error at fn. cli_ctrl_fn_internal(",arg,",argp)");
return(0x00);
}

// if(CLI_BR&(R(flag,R(ty,*argp)))) return(0x01);

return(r);
}
