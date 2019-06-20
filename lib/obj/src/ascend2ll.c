/* **** Notes

Ascend the current temporary knot position - i.e., (*argp).t in a pointer of the knot structure.

argp: Put the address of the CMDLN_STAT structure at.

Remarks:
Based on a doubly linked list
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl ascend2ll(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
// auto KNOT(*t);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!((*argp).b)) return(0x01);

if(!((*((*argp).t)).s)) return(0x01);
// It is at the terminating address i.e., (*argp).b

/* ascend */
(*argp).t = ((*((*argp).t)).s);

/* set the snapshot and knot parameters to the global delegate list - argp - in the cmdln_stat structure (out of the previous knot) */
/* copy snapshots for a CLI history to the delegate list - argp - in the CMDLN_STAT structure out of the current temporary knot */
(*argp).clih.l = ((*((*argp).t)).clih.l);
(*argp).clih.b = ((*((*argp).t)).clih.b);
(*argp).clih.t = ((*((*argp).t)).clih.t);

/* also copy a knot to the delegate list - argp - in the CMDLN_STAT structure out of the current temporary knot */
r = cipher_embed((*argp).init_p,BUFF);
if(r^(BUFF)) printf("<< Error at fn. cipher_embed()");
r = cpy((*argp).init_p,(*((*argp).t)).p);
(*argp).p = ((*argp).init_p);
(*argp).count = (0x00);
r = ct((*argp).init_p);
(*argp).tail = (r);

/* and registre coordinates to the global delegate list - argp - in the CMDLN_STAT structure */
(*argp).depart.X = ((*((*argp).t)).depart.X);
(*argp).depart.Y = ((*((*argp).t)).depart.Y);
(*argp).caret_pos.X = (0x00);
(*argp).caret_pos.Y = ((*argp).depart.Y);

return(0x01);
}
