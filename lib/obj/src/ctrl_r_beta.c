/* **** Notes

Press <Ctrl-R> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl ctrl_r_beta(CMDLN_STAT(*argp))) {

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

if(!((*argp).count)) return(0x01);

XOR(l,l);
XOR(i,i);

r = ctrl_b_beta(argp);
ADD(l,r);

p = ((*argp).p);

if(!(*p)) return(0x00);

if(!(HYPHEN^(*p))) {
if(HYPHEN^(*(-0x01+(p)))) return(0x01);
return(0x01+(ctrl_r_beta(argp)));
}

if(!(SP^(*p))) return(0x01+(ctrl_r_beta(argp)));

if(!(HT^(*p))) return(0x01);

i = ct2firstletter(p,(*argp).init_p);
ADD(l,i);
while(i) {
r = ctrl_b_beta(argp);
--i;
}

return(l);
}
