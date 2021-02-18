/* **** Notes

Restore.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_restore_rule(signed char(*cache),cli_rule_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
// if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CLI_INIT&(R(flag,*argp)))) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
r = compare(*(CLI_INDEX+(R(b,*argp))),b);

if(!(concatenate(CLI_BB,&b,cache))) return(0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(b,*argp))) = (b);

b = (r+(b));
*(CLI_INDEX+(R(b,*argp))) = (b);

b = (*(CLI_BASE+(R(b,*argp))));
b = (b+(ct(b)));
*(CLI_LEAD+(R(b,*argp))) = (b);

b = (0x00);

//* e.g.,
AND(flag,0x00);
OR(flag,CLI_ERROR);
NOT(flag);
AND(R(flag,*argp),flag);
//*/

return(0x01);
}
