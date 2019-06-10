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

/* Snapshot to undo and re-do before changing by fn. cmdln_ctrl_w(). */
r = cmdln_history(argp);
if(!r) printf("%s\n", "<< Error at fn. cmdln_history()");

r = cmdln_ctrl_w(argp);

/* e.g., re-snapshot to undo and re-do after changing by fn. cmdln_ctrl_w().
r = cmdln_history(argp);
if(!r) printf("%s\n", "<< Error at fn. cmdln_history() the second");
//*/

return(r);
}
