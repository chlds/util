/* **** **** **** **** Notes

Convert to an signed interger out of the letters.

Not using fn. spl() and fn. spl_free().

//*/



# define C_CODE_STDS

# include "./../../../incl/config.h"



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

XOR(l, l);
XOR(i, i);
XOR(d, d);

while(*(si+(l))) {
c = (char signed) (*(si+(l++)));
XOR(i, i);
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

if(!('-'^(*(si)))) {
if(!('-'^(*(si+(1))))) {
(*(di)) = (int signed) (d);
}
else {
(*(di)) = (int signed) (1+(~(d)));
}}

else {
(*(di)) = (int signed) (d);
}


XOR(c, c);

return(char signed) (c);
}
