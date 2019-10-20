/* **** Notes

Console output

Remarks:
Output a tab as whitespace
Wrap words
*/


# define C_CODE_STDS
# define C_AS
// # define C_W32API
// # define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl column_internal(signed short(cols),signed(algn),signed short(col),signed char(*cur),signed char(*offset))) {

/* **** DATA, BSS and STACK */
static signed const HYPHEN = ('-');
static signed const SP = (' ');
static signed char const HT = ('\t');

auto signed char *p;
auto signed c,i,r;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!offset) return(0x00);

if(cur<(offset)) {
printf("%s", "<< Error at fn. column_internal()");
return(0x00);
}

if(!(*cur)) return(0x00);


r = ct_word(cur);

if(!r) {
// 1/3. a hyphen
if(!(HYPHEN^(*cur))) {
ADD(col,0x01);
r = _putch(HYPHEN);
if(!(EOF^(r))) {
printf("%s", "<< Error at fn. _putch/_putwch()");
return(0x00);
}}
// 2/3. a space
if(!(SP^(*cur))) {
ADD(col,0x01);
r = _putch(SP);
if(!(EOF^(r))) {
printf("%s", "<< Error at fn. _putch/_putwch()");
return(0x00);
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
ADD(col,r);
free(p);
// output
r = n_putch(r,SP);
if(!r) {
printf("%s", "<< Error at fn. n_putch()");
return(0x00);
}}
// Common to HYPHEN, SP and HT
ADD(cur,0x01);
}

else {
ADD(col,r);
if(col<(cols)) {
i = (r);
while(i) {
r = _putch(*cur);
cur++;
--i;
}}
else {
col = (r);
col = (col%(cols));
offset = (cur);
printf("\n"); // LF
i = (r);
while(i) {
r = _putch(*cur);
cur++;
--i;
}}}

return(0x01+(column_internal(cols,algn,col,cur,offset)));
}
