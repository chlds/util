/* **** **** **** **** Refer on

./incl/lib/ct_ltrs.c

Count the letters except the blanks.

//*/


# define C_CODE_STDS

# include "./../decl/config.h"


short int signed(__cdecl ct_ltrs(char signed(*argp))) {


// auto const int signed(DELAY) = (int signed) (100);

auto short int signed(count);
auto int signed(i), (j);


if(!(argp)) {
// Error
return(short int signed) (~(NIL));
}


count = (count^(count));
i = (count);
j = (i);


while(*(argp+(i))) {
if(!(' '^(*(argp+(i))))) {
}
else {
(count++);
}
(i++);
// CPU idling
// Sleep(DELAY);
}


return(short int signed) (count);
}
