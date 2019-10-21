/* **** Notes

Console output

Remarks:
Output a tab as whitespace
Wrap words
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API // To use fn. Sleep in recursion.
// # define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl column_internal(signed short(cols),signed(algn),signed short(col),signed char(*cur),signed char(*offset))) {

/* **** DATA, BSS and STACK */
static signed const HYPHEN = ('-');
static signed const SP = (' ');
static signed char const HT = ('\t');

static signed char const LF = ('\n');

auto signed const QUANTUM = (0x10);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!offset) return(0x00);

if(cur<(offset)) {
printf("%s", "<< Error at fn. column_internal()");
return(0x00);
}

if(!(*cur)) return(0x00);

r = ct2specials(cur);
// ..or r = ct_word(cur);

if(!r) {

Sleep(DELAY);

// 0/3. a linefeed
if(!(LF^(*cur))) {
XOR(col,col);
printf("\n");
}

// 1/3. a hyphen: There is room for improvement.
if(!(HYPHEN^(*cur))) {
ADD(col,0x01);
if(col<(cols)) XOR(flag,flag);
else XNOR(flag);
r = _putch(HYPHEN);
if(!(EOF^(r))) {
printf("%s", "<< Error at fn. _putch/_putwch()");
return(0x00);
}
if(flag) {
printf("\n");
XOR(col,col);
}}
// 2/3. a space
if(!(SP^(*cur))) {
ADD(col,0x01);
if(col<(cols)) XOR(flag,flag);
else XNOR(flag);
r = _putch(SP);
if(!(EOF^(r))) {
printf("%s", "<< Error at fn. _putch/_putwch()");
return(0x00);
}
if(flag) {
printf("\n");
XOR(col,col);
}}
// 3/3. a horizonal tab
if(!(HT^(*cur))) {
r = ct_txt(algn,offset);
// ..or use fn. ct(offset).
INC(r);
p = (signed char(*)) malloc(r*(sizeof(signed char)));
r = ct_word(cur);
r = cpy2p(p,cur+(r),offset);
r = align(algn,p);
free(p);
// output: drain
ADD(col,r);
r = n_putch(r,SP);
if(!r) {
printf("%s", "<< Error at fn. n_putch()");
return(0x00);
}}
// Common to (LF,) HYPHEN, SP and HT
ADD(cur,0x01);
}

else {
i = (r);
ADD(col,r);
if(col<(cols)) {
while(i) {
r = _putch(*cur);
cur++;
--i;
}}
else {
col = (0x00);
offset = (cur);
printf("\n"); // LF
while(i) {
if(col<(cols)) {
}
else {
printf("\n");
col = (0x00);
}
r = _putch(*cur);
col++;
cur++;
--i;
}}}

return(0x01+(column_internal(cols,algn,col,cur,offset)));
}
