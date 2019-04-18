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

unsigned int(__stdcall cmdl2_history(void(*argp))) {

/* **** DATA */
external signed char(Announcements);
external signed int(Running);

external struct knot(*base);
external struct knot(*lead);

auto signed int const(QUANTUM) = (0x10);
auto signed int const(DELAY) = (2*(QUANTUM));

auto struct knot(*cache);
auto signed int(i);

/* **** CODE/TEXT */
Running++;

printf("\n");

i = (i^(i));
cache = (base);

while(cache) {
if(Announcements) {
break;
}
Sleep(DELAY);
printf("%6d%s", (i++), (".  "));
printf("%s\n", (*cache).p);
cache = (struct knot(*)) (*cache).d;
}

--Running;
return(0x00);
}
