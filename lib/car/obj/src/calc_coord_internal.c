/* **** Notes

Calculate coordinates of the terminating address of an array for characters.

Remarks:
Absorb deviation caused by wrapping words.
Refer at incl/recur.h.
*/


# define C_CODE_STDS
# define CAR
# define ALIGN_TAB (0x08)

# include "../../../incl/config.h"

signed(__cdecl calc_coord_internal(COORDS(*coords),signed char(*secure),signed char(*argp),signed char(*base),signed(cols))) {

/* **** DATA, BSS and STACK */
static signed char const HYPHEN = ('-');
static signed char const SP = (' ');
static signed char const HT = ('\t');

auto signed char *p;
auto signed len,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!coords) return(0x00);
if(!secure) return(0x00);
if(!argp) return(0x00);
if(!base) return(0x00);

if(argp<(base)) return(0x00);
if(!(*argp)) return(0x00);


XOR(flag,flag);

// save to deviate (i.e., offset the base for alignement)..
p = (argp);

r = ct_word(argp);
len = (r);

if(!r) {
if(!(HT^(*argp))) {
flag++;
r = cpy2p(secure,argp,base);
r = align(ALIGN_TAB,secure); // Align
ADD((*coords).x,r);
}
else ADD((*coords).x,0x01);
ADD(argp,0x01);
}

else {
ADD((*coords).x,r);
ADD(argp,r);
}


if(!flag) {
r = ((*coords).x);
if(r<(cols)) {
}
else {
INC((*coords).y);
(*coords).x = (len);
base = (p); // deviations caused by wrapping words.
while(0x01) {
r = ((*coords).x);
if(r<(cols)) break;
INC((*coords).y);
ADD(R(x,*coords),(-0x01*(cols)));
}}}

else {
r = ((*coords).x);
if(r<(cols)) {
}
else {
INC((*coords).y);
r = ((*coords).x);
r = (r%(cols));
(*coords).x = (r);
}}

return(0x01+(calc_coord_internal(coords,secure,argp,base,cols)));
}
