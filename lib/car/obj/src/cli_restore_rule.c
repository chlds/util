/* **** Notes

Restore.

Remarks:
Along with C library
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_restore_rule(signed char(*cache),cli_rule_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed dif;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
// if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CLI_INIT&(R(flag,*argp)))) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
dif = compare(*(CLI_INDEX+(R(b,*argp))),b);

r = ct(cache);
r = cli_restore_base(r,&b);
if(!r) return(0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(b,*argp))) = (b);

while(dif) {
INC(b);
--dif;
}
*(CLI_INDEX+(R(b,*argp))) = (b);

b = (*(CLI_BASE+(R(b,*argp))));
r = ct(b);
while(r) {
INC(b);
--r;
}
r = cpy(b,cache);
while(r) {
INC(b);
--r;
}
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
