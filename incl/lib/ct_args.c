/* **** **** **** **** Refer on

./incl/lib/ct_args.c

Count the arguments.

//*/



# define C_CODE_STDS

# include "./../decl/config.h"



char signed(__cdecl ct_args(int signed(*di), char signed(*si))) {


/* **** **** DATA */

auto const int signed(SNOOZE) = (int signed) (255);
auto const int signed(DELAY) = (int signed) (25);

auto int signed(i), (j), (l), (r);
auto int signed(count);

auto char signed(c);

auto const char signed(delimiter) = (char signed) (' ');


/* **** **** CODE/TEXT */

if(!(si)) {
// Error
return(char signed) (~(NIL));
}

if(!(di)) {
// Error
return(char signed) (~(NIL));
}


XOR(count, count);
XOR(l, l);
XOR(j, j);
XOR(i, i);

while(*(si+(i))) {
if(!(delimiter^(*(si+(i++))))) {
XOR(j, j);
}
else {
if(!(j)) {
(count++);
(j++);
}}
// CPU idling
if(l<(SNOOZE)) {
(l++);
}
else {
XOR(l, l);
Sleep(DELAY);
}}


(*(di)) = (int signed) (count);

XOR(c, c);

return(char signed) (c);
}
