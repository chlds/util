/* **** Notes

Restore.

Remarks:
Along with C library
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_restore_boil(signed char(*cache),cli_b_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed dif;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
// if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CLI_INIT&(R(flag,*argp)))) return(0x00);

b = (*(CLI_BASE+(R(base,*argp))));
dif = compare(*(CLI_INDEX+(R(base,*argp))),b);

r = ct(cache);
r = cli_restore_boil_internal(r,&b);
if(!r) return(0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(base,*argp))) = (b);

while(dif) {
INC(b);
--dif;
}
*(CLI_INDEX+(R(base,*argp))) = (b);

b = (*(CLI_BASE+(R(base,*argp))));
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
*(CLI_LEAD+(R(base,*argp))) = (b);

b = (0x00);

//* e.g.,
AND(flag,0x00);
OR(flag,CLI_ERROR);
NOT(flag);
AND(R(flag,*argp),flag);
//*/

return(0x01);
}
