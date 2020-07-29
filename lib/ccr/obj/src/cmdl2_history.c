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

unsigned(__stdcall cmdl2_history(void(*argp))) {

/* **** DATA */
external signed short Announcements;
external signed Running;

external struct knot *base;
external struct knot *lead;

auto signed const QUANTUM = (0x10);
auto signed const DELAY = (0x01*(QUANTUM));

auto struct knot *cache;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

Running++;

printf("\n");

i = (i^(i));
cache = (base);

while(cache) {
if(Announcements) break;
Sleep(DELAY);
printf("  %d%s",i++,". ");
if(R(p,*cache)) printf("%s",R(p,*cache));
printf("\n");
cache = R(d,*cache);
}

printf("\n");

--Running;

return(0x00);
}
