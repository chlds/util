/* **** Notes

Count the last dead space by wrapping words

Remarks:
Refer at incl/vu.h
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl scan_deadsp_internal(signed char(*di),signed char(*si),CMDLN_STAT(*argp),signed(*diff),signed(cols),signed(col))) {

/* **** DATA, BSS and STACK */
auto signed char(HYPHEN) = ('-');
auto signed char(HT) = ('\t');
auto signed char(SP) = (' ');

auto signed long long(cur);
auto signed(r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);
if(!argp) return(0x00);
if(!diff) return(0x00);

if(!(*si)) return(0x00);

cur = ((signed long long) si);
if(!(cur^((signed long long) di))) return(0x00);
if(di<(si)) return(0x00);

XOR(flag,flag);

r = ct_word_internal(si);

if(!r) {
if(!(HYPHEN^(*si))) XNOR(flag);
if(!(SP^(*si))) XNOR(flag);
if(flag) {
INC(si);
INC(col);
col = (col%(cols));
}
if(!flag) {
if(!(HT^(*si))) {
XNOR(flag);
INC(si);
r = (col%(ALIGN_TAB));
col = (col+(-r+(ALIGN_TAB)));
col = (col%(cols));
}}
if(!flag) {
printf("%s", "<< Error at fn. ct_word_internal()");
return(0x00);
}}

else {
si = (si+(r));
col = (col+(r));
if(col<(cols)) {
}
else {
col = (col%(cols));
*diff = (-col+(r));
col = (r);
}}

if(C_DBG) r = debug_monitor(argp);

return(0x01+(scan_deadsp_internal(di,si,argp,diff,cols,col)));
}
