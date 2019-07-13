/* **** Notes

Press <Ctrl-W> to invoke the function.

Only for fn. cmdln_history().

Switch to fn. cmdln_ctrl_w() if you'd like.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_w_prep(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = ((*argp).count);

if(!r) return(0x01);

/* Snapshot to undo and re-do before changing by fn. cmdln_ctrl_w(). */
// e.g., refer at fn. cmdln_ctrl_lbracket for flag (*argp).hist.
XOR((*argp).hist,(*argp).hist);
r = cmdln_history(argp);
if(!r) printf("%s\n", "<< Error at fn. cmdln_history()");

/* Build in fn. cmdln_history
(*((*argp).t)).clih.t = ((*argp).clih.t);
(*((*argp).t)).clih.l = ((*argp).clih.l);
(*((*argp).t)).clih.b = ((*argp).clih.b);
//*/

r = cmdln_ctrl_w(argp);

return(r);
}
