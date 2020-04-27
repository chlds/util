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

unsigned(__stdcall cmdl2_output(void(*argp))) {

/* **** DATA */
external signed short Announcements;
external signed Running;

external struct knot *base;
external struct knot *lead;

auto signed const QUANTUM = (0x10);
auto signed const DELAY = (0x01*(QUANTUM));

auto struct knot *cache;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

Running++;

r = ct_ars(&i,argp);
if(!r) {
--Running;
printf("%s\n","<< Error at fn. ct_ars()");
return(0x00);
}

if(0x01<(i)) flag = (0x01);
else flag = (0x00);

if(flag) printf("\n");

i = (i^(i));
cache = (struct knot(*)) (base);

while(cache) {
if(Announcements) break;
Sleep(DELAY);
// Check the command flag i.e., CMDFLAG to be set
if(!(R(flag,*cache))) {
if(flag) printf("  %d%s",i++,". ");
if(R(p,*cache)) printf("%s",R(p,*cache));
printf("\n");
}
cache = R(d,*cache);
}

if(flag) printf("\n");

--Running;

return(0x00);
}
