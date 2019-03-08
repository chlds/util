/* **** **** **** **** Refer on

./incl/lib/spl.c

Split a string.

Annotation:

Unmap all the buffers allocated by fn. spl() using fn. spl_free().

//*/




# define C_CODE_STDS

# include "./../decl/config.h"




char signed(__cdecl spl(char signed(***cache), int signed(*di), char signed(*si))) {




/* **** **** DATA */

// auto const int signed(DELAY) = (int signed) (100);

auto const char signed(delimiter) = (char signed) (' ');

auto int signed(i), (j), (l), (r);
auto int signed(countlett);
auto int signed(count);

auto short int signed(flag);

auto char signed(c);




/* **** **** CODE/TEXT */

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




/* **** Count the arguments */

XOR(count, count);
XOR(l, l);
XOR(j, j);
XOR(i, i);

while(*(si+(i))) {
if(!(delimiter^(*(si+(i++))))) {
XOR(j, j);
}
else {
if(!(j)) {
(count++);
(j++);
}}}


(*(di)) = (int signed) (count);




/* **** allocate an array for each pointer */

(count++);
(*cache) = (char signed(**)) malloc(count+(sizeof(char signed(*))));

if(!(*cache)) {
printf("\n%s", ("<< Error at (*cache) = (char signed(**)) malloc() of the fn. spl()."));
return(char signed) (~(NIL));
}

else {
(--count);
(*(count+(*(cache)))) = (char signed(*)) (NIL);
}




/* **** allocate each buffer */

XOR(countlett, countlett);
XOR(l, l);
XOR(j, j);
XOR(i, i);

while(*(si+(i))) {

if(!(delimiter^(*(si+(i++))))) {
if(!(countlett)) {
}
else {
/* allocate */
(countlett++);
(*(l+(*cache))) = (char signed(*)) malloc(countlett+(sizeof(char signed)));
if(!(*(l+(*cache)))) {
printf("\n%s", ("<< Error at (*(l+(*cache))) = (char signed(*)) malloc() of the fn. spl()."));
return(char signed) (~(NIL));
}
(l++);
XOR(countlett, countlett);
}}

else {
(countlett++);
}
// (i++);
// CPU idling
// Sleep(DELAY);
}


if(countlett) {
(countlett++);
(*(l+(*cache))) = (char signed(*)) malloc(countlett+(sizeof(char signed)));
if(!(*(l+(*cache)))) {
printf("\n%s", ("<< Error at (*(l+(*cache))) = (char signed(*)) malloc() of the fn. spl()."));
return(char signed) (~(NIL));
}}




/* **** copy at each buffer */

XOR(flag, flag);
XOR(l, l);
XOR(j, j);
XOR(i, i);

while(*(si+(i))) {

if(!(delimiter^(*(si+(i))))) {
XOR(flag, flag);
(i++);
}

else {
OR(flag, 0x01);
XOR(j, j);
while(*(si+(i))) {
if(!(delimiter^(*(si+(i))))) {
(*(j+(*(l+(*cache))))) = (char signed) (NIL);
(l++);
break;
}
(*(j+(*(l+(*cache))))) = (char signed) (*(si+(i++)));
(j++);
}}}


if(flag) {
(*(j+(*(l+(*cache))))) = (char signed) (NIL);
}




XOR(c, c);

return(char signed) (c);
}
