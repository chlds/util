/*

Retrieve bytes to the leading address of a word or symbol.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_va_r(signed short(flag),signed char(*sym),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed char cr = ('\r');
auto signed char lf = ('\n');
auto signed short BYTE_ONE = (0x01);
auto signed short BYTE_MUL = (0x02);
auto signed short BYTE_SYM = (0x04);
auto signed short BYTE_S_H = (0x08);

// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(HT^(*argp))) return(0x00);

if(EQ(cr,*argp)) return(0x00);
if(EQ(lf,*argp)) return(0x00);

if(SP^(*argp)) {
if(BYTE_S_H&(flag)) return(0x00);
r = ord(sym,*argp);
if(!(BYTE_SYM&(flag))) {
if(r<(ct(sym))) return(0x00);
}
if(BYTE_SYM&(flag)) {
if(!(r<(ct(sym)))) return(0x00);
else OR(flag,BYTE_SYM);
}}

else OR(flag,BYTE_S_H);

r = ct_a(argp);
if(!r) return(0x00);
if(!(EQ(SP,*argp))) {
if(!(BYTE_MUL<(r))) {
OR(flag,BYTE_ONE);
if(!(BYTE_SYM&(flag))) {
if(BYTE_MUL&(flag)) return(0x00);
}}
if(BYTE_MUL<(r)) {
if(flag&(BYTE_SYM|(BYTE_ONE))) return(0x00);
OR(flag,BYTE_MUL);
}}

return(r+(cue_va_r(flag,sym,r+(argp))));
}
