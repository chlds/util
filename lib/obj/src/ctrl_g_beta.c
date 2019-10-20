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
auto signed i,l,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

XOR(l,l);
XOR(i,i);

p = ((*argp).p);

if(!(*p)) return(0x01);

if(!(HYPHEN^(*p))) {
r = ctrl_f_beta(argp);
r = ct_word((*argp).p);
if(r) return(0x01);
p = ((*argp).p);
if(!(HT^(*p))) return(0x01);
return(0x01+(ctrl_g_beta(argp)));
}

if(!(HT^(*p))) {
r = ctrl_f_beta(argp);
ADD(l,r);
p = ((*argp).p);
r = ct2nonblank(p);
ADD(l,r);
i = (r);
while(i) {
r = ctrl_f_beta(argp);
--i;
}
return(l);
}

if(!(SP^(*p))) {
r = ct2nonblank(p);
ADD(l,r);
ADD(i,r);
while(i) {
r = ctrl_f_beta(argp);
--i;
}
return(l);
}

r = ct_word(p);
ADD(l,r);
ADD(i,r);
while(i) {
r = ctrl_f_beta(argp);
--i;
}

p = ((*argp).p);

r = ct2nonblank(p);
ADD(l,r);
ADD(i,r);
while(i) {
r = ctrl_f_beta(argp);
--i;
}

return(l);
}
