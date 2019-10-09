/* **** Notes

Press <Ctrl-G> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl ctrl_g_beta(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
static signed char const(HYPHEN) = ('-');
static signed char const(SP) = (' ');
static signed char const(HT) = ('\t');

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(*((*argp).p))) return(0x01);

XOR(flag,flag);
XOR(i,i);

r = ct_word_internal((*argp).p);
ADD(i,r);

if(!r) {
if(!(HT^(*((*argp).p)))) {
r = (0x01);
ADD(i,r);
XNOR(flag);
}}

if(!flag) {
if(!(SP^(*(r+((*argp).p))))) {
r = ct2nonblank(r+((*argp).p));
ADD(i,r);
}
if(!(HYPHEN^(*(r+((*argp).p))))) {
r = (0x01);
ADD(i,r);
}}

while(i) {
r = ctrl_f_beta(argp);
if(!r) printf("%s", "<< Error at fn. ctrl_f_beta()");
--i;
}

if(C_DBG) r = debug_monitor(argp);

return(0x01);
}
