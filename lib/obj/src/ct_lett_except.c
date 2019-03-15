/* **** **** **** **** Refer on

./incl/lib/ct_lett_except.c

Count the letters except a letter you select.

//*/



# define C_CODE_STDS

# include "./../../../incl/config.h"



char signed(__cdecl ct_lett_except(int signed(*cache), char signed(*di), char signed(si))) {


// auto const int signed(DELAY) = (int signed) (100);

auto int signed(count);
auto int signed(i), (j), (l), (r);
auto char signed(c);


/*
if(!(si)) {
// Error
return(char signed) (~(NIL));
}
//*/

if(!(di)) {
// Error
return(char signed) (~(NIL));
}

if(!(cache)) {
// Error
return(char signed) (~(NIL));
}


count = (int signed) (count^(count));
j = (int signed) (j^(j));
i = (int signed) (i^(i));

c = (char signed) (si);

while(*(di+(i))) {
if(!(c^(*(di+(i++))))) {
}
else {
(count++);
}
// (i++);
// CPU idling
// Sleep(DELAY);
}


(*cache) = (int signed) (count);

c = (char signed) (c^(c));

return(char signed) (c);
}
