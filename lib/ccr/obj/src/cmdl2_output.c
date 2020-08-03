/* **** Notes
Commandlet to output

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..
*/


# define external extern
# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

unsigned(__stdcall cmdl2_output(SAT(*argp))) {

/* **** DATA */
external signed short Announcements;
external signed Running;

auto signed const QUANTUM = (0x10);
auto signed const DELAY = (0x01*(QUANTUM));

auto struct knot *cache,*lead,*base;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

Running++;

cache = (*(CLI_INDEX+(R(knot,R(reel,*argp)))));
if(!cache) return(0x00);

p = (R(p,*cache));
r = ct_ars(&i,p);
if(!r) {
--Running;
printf("%s \n","<< Error at fn. ct_ars()");
return(0x00);
}

if(0x01<(i)) flag = (0x01);
else flag = (0x00);

if(flag) printf("\n");

i = (i^(i));
cache = (*(CLI_BASE+(R(knot,R(reel,*argp)))));

while(cache) {
if(Announcements) break;
Sleep(DELAY);
// Check the command flag i.e., CMDFLAG to be set
if(!(R(flag,*cache))) {
if(flag) printf("  %d%s",i++,". ");
if(R(p,*cache)) printf("%s \n",R(p,*cache));
}
cache = R(d,*cache);
}

if(flag) printf("\n");

--Running;

return(0x00);
}
