/*

Retrieve bytes to the leading address of a word or symbol.

Remarks:
Refer at fn. ct_to
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue(signed char(*sym),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed short BYTE_ONE = (0x01);
auto signed short BYTE_MUL = (0x02);
auto signed short BYTE_SYM = (0x04);
auto signed short BYTE_S_H = (0x08);

// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(flag,0x00);
if(!(SP^(*argp))) OR(flag,BYTE_S_H);
if(!(HT^(*argp))) OR(flag,BYTE_S_H);

r = ord(sym,*argp);
if(r<(ct(sym))) OR(flag,BYTE_SYM);

r = ct_a(argp);
if(!r) return(0x00);
if(!(BYTE_MUL<(r))) OR(flag,BYTE_ONE);
if(BYTE_MUL<(r)) OR(flag,BYTE_MUL);

return(r+(cue_r(flag,sym,r+(argp))));
}
