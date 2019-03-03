/* **** **** **** **** Refer on

./incl/lib/cv_lett.c

Convert to an interger out of the letters.

//*/


# define C_CODE_STDS

# include "./../decl/config.h"




char signed(__cdecl cv_lett(int signed(*di), char signed(*si))) {


// auto const int signed(LIMIT) = (int signed) (3600);
auto const int signed(RADIX) = (int signed) (0x0A);
auto const int signed(TABLE) = (int signed) (0x0A);

auto const int signed(DELAY) = (int signed) (10);

auto char signed(c);

auto int signed(i), (j), (l), (r);
auto int signed(d), (s);

auto char signed(*table) = ("0123456789ABCDEF");




/* **** **** **** **** CODE/TEXT */

if(!(si)) {
// Error
printf("\n%s", ("<< An error to put the NIL at argument SI of fn. cv_ltrs()."));
return(char signed) (~(NIL));
}

if(!(di)) {
// Error
printf("\n%s", ("<< An error to put the NIL at argument DI of fn. cv_ltrs()."));
return(char signed) (~(NIL));
}


/* **** **** Initialize */

l = (l^(l));
i = (i^(i));
d = (d^(d));

while(*(si+(l))) {
c = (char signed) (*(si+(l++)));
i = (i^(i));
while(i<(TABLE)) {
if(!(c^(*(table+(i))))) {
d = (int signed) (i+RADIX*(d)) /* % (LIMIT) */ ;
break;
}
else {
(i++);
}}
// CPU idling
Sleep(DELAY);
}


/* **** **** Set to argument DI */

(*(di)) = (int signed) (d);


return(char signed) (NIL);
}
