/* **** **** **** **** Refer on

./incl/lib/ct_ltrs.c

Count the letters except the blanks.

//*/


# define C_CODE_STDS

# include "./../decl/config.h"


char signed(__cdecl ct_ltrs(int signed(*di), char signed(*si))) {


// auto const int signed(DELAY) = (int signed) (100);

auto int signed(count);
auto int signed(i), (j), (l), (r);
auto char signed(c);


if(!(si)) {
// Error
return(short int signed) (~(NIL));
}

if(!(di)) {
// Error
return(short int signed) (~(NIL));
}


count = (int signed) (count^(count));
j = (int signed) (j^(j));
i = (int signed) (i^(i));

while(*(si+(i))) {
if(!(' '^(*(si+(i++))))) {
}
else {
(count++);
}
// (i++);
// CPU idling
// Sleep(DELAY);
}


(*di) = (int signed) (count);

c = (char signed) (c^(c));

return(short int signed) (c);
}
