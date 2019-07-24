/* **** Notes

Find a knot.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl find_knot_internal(signed(n),KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto signed(r);
auto signed short(flag);

/* **** CODE/TEXT */
if(n<(0x00)) return(0x00);
if(!k) return(0x00);
if(!argp) return(0x00);

XOR(flag,flag);

if(!((*k).d)) XNOR(flag);
if(!n) XNOR(flag);

if(flag) {
(*argp).t = (k);
// connect a knot with the workspace.
r = cpy((*argp).init_p,(*((*argp).t)).p);
// set the three elements with the one.
(*argp).tail = (r);
(*argp).count = (0x00);
(*argp).p = ((*argp).init_p);
// connect snapshots with the one.
(*argp).clih.l = (SNAPSHOT*) ((*((*argp).t)).clih.l);
(*argp).clih.t = (SNAPSHOT*) ((*((*argp).t)).clih.t);
(*argp).clih.b = (SNAPSHOT*) ((*((*argp).t)).clih.b);
// set coordinates with the one.
(*argp).depart.X = ((*((*argp).t)).depart.X);
(*argp).depart.Y = ((*((*argp).t)).depart.Y);
// output..
return(0x01);
}

k = ((*k).d);

DEC(n);

return(0x01+(find_knot_internal(n,k,argp)));
}
