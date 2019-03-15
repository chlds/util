/* **** **** a commandlet for all the commandlets


to output


Attention:

This code

is for a doubly LL i.e.,

<NOT> for a circular LL..

*/



# define C_CODE_STDS
# define C_AS

# define external extern

# include "./../../../incl/config.h"



char signed(__cdecl cmdl_output(void(*argp))) {


/* **** **** DATA */

external char signed(Announcements);
external int signed(Running);

external struct knot(*base);
external struct knot(*lead);

auto const int signed(DELAY) = (int signed) (50);
auto int signed(i);
auto struct knot(*cache);


/* **** **** CODE/TEXT */

(Running++);

printf("\n");

i = (i^(i));
cache = (struct knot(*)) (base);

while(cache) {
if(Announcements) {
break;
}
Sleep(DELAY);
// Check the command flag i.e., CMDFLAG to be set
if((*cache).flag) {
}
else {
printf("%6d%s", (i++), (".  "));
printf("%s\n", (*cache).p);
}
cache = (struct knot(*)) (*cache).d;
}

(--Running);

return(char signed) (NIL);
}
