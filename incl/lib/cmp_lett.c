/* **** **** **** **** Refer on

./incl/lib/cmp_lett.c

Compare file A and B

//*/


# define C_CODE_STDS

# include "./../decl/config.h"


char signed(__cdecl cmp_lett(int signed(*cache), char signed(*di), char signed(*si))) {


// auto const int signed(DELAY) = (int signed) (100);

auto int signed(i), (j), (l), (r);
auto char signed(c);

if(!(si)) {
// Error
return(char signed) (~(NIL));
}

if(!(di)) {
// Error
return(char signed) (~(NIL));
}

if(!(cache)) {
// Error
return(char signed) (~(NIL));
}


i = (i^(i));


while(*(si+(i))) {
c = (char signed) (*(di+(i)));
if(!(c^(*(si+(i))))) {
}
else {
break;
}
(i++);
// CPU idling
// Sleep(DELAY);
}

c = (char signed) (*(di+(i)));
(*cache) = (int signed) (-c+(*(si+(i))));

c = (char signed) (c^(c));

return(char signed) (c);
}
