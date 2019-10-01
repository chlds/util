/* **** Notes

Cumulate dead space after wrapping words to the terminating address out of the leading address.

Remarks:
Refer at incl/vu.h
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cumulate_here_internal(signed(*diff),signed char(*base),signed(col),signed(cols),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(HYPHEN) = ('-');
auto signed char(HT) = ('\t');
auto signed char(SP) = (' ');

auto signed char(*p);
auto signed long long(cur);
auto signed(cache), (r);
auto signed short(vflag);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!base) return(0x00);
if(!diff) return(0x00);

if(!(*base)) return(0x00);

p = ((*argp).p);

if(p==(base)) vflag = (0x01);
if(p<(base)) return(0x00); // e.g., vflag = (0x01);
else vflag = (0x00);

XOR(flag,flag);

r = ct_word_internal(base);

if(!r) {
if(!(HYPHEN^(*base))) XNOR(flag);
if(!(SP^(*base))) XNOR(flag);
if(flag) {
INC(base);
INC(col);
col = (col%(cols));
}
if(!flag) {
if(!(HT^(*base))) {
XNOR(flag);
INC(base);
r = (col%(ALIGN_TAB));
col = (col+(-r+(ALIGN_TAB)));
col = (col%(cols));
}}
if(!flag) {
printf("%s", "<< Error at fn. ct_word_internal()");
return(0x00);
}}

else {
base = (base+(r));
r = (col+(r));
if(r<(cols)) {
col = (r);
}
else {
cache = (-col+(cols));
*diff = (cache+(*diff));
col = (r%(cols));
ADD(col,cache);
col = (col%(cols));
}}

if(C_DBG) r = debug_monitor(argp);

if(vflag) return(0x00);

return(0x01+(cumulate_here_internal(diff,base,col,cols,argp)));
}
