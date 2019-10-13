/* **** Notes

Quickly output character lines out of the argument

Remarks:
Based on fn. c_out_beta
Along with fn. cq_outs_beta
Refer at fn. cmdln_ctrl_i_beta e.g., along with fn. clearhere
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cq_outs_beta_internal(signed(deadline),KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);

if(deadline<(coord.Y)) return(0x00);

/* coordinates */
(*k).depart.X = (0x00);
(*k).depart.Y = (coord.Y);

r = c_outs_beta((*k).p,argp);

if(!r) {
// It is empty ..or has occurred an error.
}

printf("\n");

k = ((*k).d);

return(0x01+(cq_outs_beta_internal(deadline,k,argp)));
}