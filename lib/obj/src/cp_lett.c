/* **** **** **** **** Refer on

./incl/lib/cp_lett.c

Copy to the <di> out of the <si>

//*/



# define C_CODE_STDS

# include "./../../../incl/config.h"



char signed(__cdecl cp_lett(int signed(*cache), char signed(*di), char signed(*si))) {


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
c = (char signed) (*(si+(i)));
(*(di+(i))) = (char signed) (c);
(i++);
// CPU idling
// Sleep(DELAY);
}


(*(di+(i))) = (char signed) (NIL);

(*cache) = (int signed) (i);

c = (char signed) (c^(c));

return(char signed) (c);
}
