/* **** Notes

Find the < last > dead sp to the current address out of the leading address.

Remarks:
Derivated out of fn. cumulate_internal.
Refer at incl/vu.h
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl find_deadsp_internal(signed(*diff),signed char(*base),signed(col),signed(cols),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(HYPHEN) = ('-');
auto signed char(HT) = ('\t');
auto signed char(SP) = (' ');

auto signed char(*p);
auto signed long long(cur);
auto signed(cache), (r);

auto signed short(vflag), (overwrite);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!base) return(0x00);
if(!diff) return(0x00);

if(!(*base)) return(0x00);

XOR(vflag,vflag);
p = ((*argp).p);
// if(p==(base)) XNOR(vflag);
if(p<(base)) XNOR(vflag);

XOR(flag,flag);
r = ct_word_internal(base);
(*argp).len_of_word = (r);

if(-0x01+cols<(r)) {
(*argp).p_set_after_wrapping = (base);
overwrite = (0x00);
}
else overwrite = (0x01);

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
*diff = (cache);
col = (r%(cols));
ADD(col,cache);
col = (col%(cols));
if(overwrite) (*argp).p_set_after_wrapping = (-col+(base));
}}

// if(C_DBG) r = debug_monitor(argp);

if(vflag) return(0x00);

return(0x01+(find_deadsp_internal(diff,base,col,cols,argp)));
}
