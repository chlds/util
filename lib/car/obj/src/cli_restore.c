/* **** Notes

Restore.

Remarks:
Along with C library
//*/


# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_restore(signed(arg),cli_text_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_b_t *b;
auto cli_b_t *p;
auto signed char *cur;
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CLI_INIT&(R(flag,*argp)))) return(0x00);

p = (&(R(append,*argp)));
b = (&(R(b,*argp)));

r = cli_restore_rule(*(CLI_BASE+(R(base,*p))),b);
if(!r) return(0x00);

if(arg) {
r = cli_init_rule(arg,p);
if(!r) return(0x00);
}

return(0x01);
}
