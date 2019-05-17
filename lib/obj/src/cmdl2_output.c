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
external signed short(Announcements);
external signed(Running);

external struct knot(*base);
external struct knot(*lead);

auto signed const(QUANTUM) = (0x10);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto signed(i);

auto struct knot(*cache);

/* **** CODE/TEXT */
Running++;

printf("\n");

i = (i^(i));
cache = (struct knot(*)) (base);

while(cache) {
if(Announcements) break;
Sleep(DELAY);
// Check the command flag i.e., CMDFLAG to be set
if((*cache).flag) {
}
else {
printf("%6d%s", i++, ".  ");
printf("%s\n", (*cache).p);
}
cache = (struct knot(*)) (*cache).d;
}

--Running;
return(0x00);
}
