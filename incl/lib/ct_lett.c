/* **** **** **** **** Refer on

./incl/lib/ct_lett.c

Count the letters.

//*/


# define C_CODE_STDS

# include "./../decl/config.h"


char signed(__cdecl ct_lett(int signed(*di), char signed(*si))) {


auto const int signed(SNOOZE) = (int signed) (255);
auto const int signed(DELAY) = (int signed) (25);

auto int signed(j);
auto int signed(i);

auto char signed(c);


if(!(si)) {
// Error
return(char signed) (~(NIL));
}

if(!(di)) {
// Error
return(char signed) (~(NIL));
}


XOR(j, j);
XOR(i, i);

while(*(si+(i))) {
(i++);
// CPU idling
if(j<(SNOOZE)) {
(j++);
}
else {
XOR(j, j);
Sleep(DELAY);
}}


(*di) = (int signed) (i);

XOR(c, c);

return(char signed) (c);
}
