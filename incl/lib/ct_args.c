/* **** **** **** **** Refer on

./incl/lib/ct_args.c

Count the arguments.

//*/


# define C_CODE_STDS

# include "./../decl/config.h"


char signed(__cdecl ct_args(int signed(*di), char signed(*si))) {


// auto const int signed(DELAY) = (int signed) (100);

auto int signed(i), (j), (l), (r);
auto int signed(count);
auto char signed(c);


if(!(si)) {
// Error
return(short int signed) (~(NIL));
}

if(!(di)) {
// Error
return(short int signed) (~(NIL));
}


count = (count^(count));
// l = (l^(l));
j = (j^(j));
i = (i^(i));

while(*(si+(i))) {
if(!(' '^(*(si+(i++))))) {
j = (j^(j));
}
else {
if(!(j)) {
(count++);
(j++);
}}
// (i++);
// CPU idling
// Sleep(DELAY);
}


(*(di)) = (int signed) (count);

c = (c^(c));

return(short int signed) (c);
}
