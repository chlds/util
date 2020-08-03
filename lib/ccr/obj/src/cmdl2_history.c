/* **** Notes

Commandlet to output the history

Remarks:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..
*/


# define external extern
# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

unsigned(__stdcall cmdl2_history(SAT(*argp))) {

/* **** DATA */
external signed short Announcements;
external signed Running;

auto signed const QUANTUM = (0x10);
auto signed const DELAY = (0x01*(QUANTUM));

auto struct knot *cache,*lead,*base;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

Running++;

printf("\n");

i = (i^(i));

base = (*(CLI_BASE+(R(knot,R(reel,*argp)))));
cache = (base);

while(cache) {
if(Announcements) break;
Sleep(DELAY);
printf("  %d%s",i++,". ");
if(R(p,*cache)) printf("%s \n",R(p,*cache));
cache = R(d,*cache);
}

printf("\n");

--Running;

return(0x00);
}
