/* **** Notes

Refresh row numbers on the console screen.

k: Put the address of the KNOT structure at.
argp: Put the address of the CMDLN_STAT structure at.

Remarks:
Along with fn. refresh_row_numbers
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl refresh_row_numbers_internal(KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(i), (r);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);

r = ((*argp).csbi.srWindow.Bottom);
if(r<((*argp).cache_pos.Y)) return(0x00);

// feed back coordinate Y of the workspace to the current knot
(*k).depart.Y = ((*argp).cache_pos.Y);

i = (0x01+((*argp).csbi.srWindow.Right));
r = ct_txt(ALIGN_TAB,(*k).p);
while(0x01) {
INC((*argp).cache_pos.Y);
r = (-i+(r));
if(r<(0x01)) break;
}

k = ((*k).d);
return(0x01+(refresh_row_numbers_internal(k,argp)));
}
