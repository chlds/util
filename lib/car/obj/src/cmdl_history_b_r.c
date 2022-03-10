/* **** Notes

Commandlet to output the history

Remarks:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cmdl_history_b_r(sat_t(*argp))) {

/* Currently under construction
auto signed const QUANTUM = (0x10);
auto signed const DELAY = (0x01*(QUANTUM));
auto struct knot *cache,*lead,*base;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

printf("\n");

i = (i^(i));
base = (*(CLI_BASE+(R(knot,R(reel,*argp)))));
cache = (base);
while(cache) {
flag = (*(CLI_BASE+(R(flag,*argp))));
if(CLI_QUIT&(flag)) break;
Sleep(DELAY);
printf("  %d%s",i++,". ");
if(R(p,*cache)) printf("%s \n",R(p,*cache));
cache = R(d,*cache);
}

printf("\n");
//*/

return(0x01);
}
