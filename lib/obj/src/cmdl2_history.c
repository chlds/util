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
external signed short(Announcements);
external signed(Running);

external struct knot(*base);
external struct knot(*lead);

auto signed const(QUANTUM) = (0x10);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto struct knot(*cache);
auto signed(i);

/* **** CODE/TEXT */
Running++;

printf("\n");

i = (i^(i));
cache = (base);

while(cache) {
if(Announcements) break;
Sleep(DELAY);
printf("%6d%s", i++, ".  ");
if(R(p,*cache)) printf("%s",R(p,*cache));
printf("\n");
cache = (R(d,*cache));
}

--Running;
return(0x00);
}
