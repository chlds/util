/* **** Notes

Commandlet to output the history

Remarks:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..
*/


# define DUAL_CONFIG_H
# define CAW_H
# define SAT_H
# define STDIO_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl cmdl2_history_r(SAT(*argp))) {

auto KNOT *cache,*lead,*base;
auto signed i,r;
auto signed const QUANTUM = (0x10);
auto signed const DELAY = (0x01*(QUANTUM));

if(!argp) return(0x00);

printf("\n");

i = (i^(i));

base = (*(CLI_BASE+(R(knot,R(reel,*argp)))));
cache = (base);

while(cache) {
if(R(announce,*argp)) break;
sleep_beta(DELAY);
printf("  %d%s",i++,". ");
if(R(p,*cache)) printf("%s \n",R(p,*cache));
cache = R(d,*cache);
}

printf("\n");

return(0x01);
}
