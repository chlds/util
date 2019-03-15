/* **** **** **** **** Refer on

./incl/lib/cmp_lett_partially.c

Partially compare with the <DI> based on the <SI>

//*/



# define C_CODE_STDS

# include "./../../../incl/config.h"



char signed(__cdecl cmp_lett_partially(int signed(*cache), char signed(*di), char signed(*si))) {


// auto const int signed(DELAY) = (int signed) (100);

auto int signed(i), (j), (l), (r);
auto char signed(c);
auto char signed(flag);


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

flag = (flag^(flag));
i = (i^(i));

while(*(si+(i))) {
c = (char signed) (*(di+(i)));
if(!(c^(*(si+(i))))) {
}
else {
(flag++);
break;
}
(i++);
// CPU idling
// Sleep(DELAY);
}

if(!(flag)) {
(*cache) = (int signed) (NIL);
}

else {
c = (char signed) (*(di+(i)));
(*cache) = (int signed) (-c+(*(si+(i))));
}

c = (char signed) (c^(c));

return(char signed) (c);
}
