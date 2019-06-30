/* **** Notes

Synchronise coordinates

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl sync_coordinates_internal(COORD(coo),KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord), (coord_b);
auto signed(i), (r);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!argp) return(0x00);

i = ((*argp).csbi.srWindow.Bottom);
if(i<(coo.Y)) return(0x00);

// reset coordinates for the current knot
(*k).depart.X = (0x00);
(*k).depart.Y = (coo.Y);
// also sync. coordinates with the workspace
(*argp).depart.X = ((*k).depart.X);
(*argp).depart.Y = ((*k).depart.Y);

r = ct_txt(ALIGN_TAB,(*k).p);
while(0x01) {
INC(coo.Y);
r = (r+(-(0x01+((*argp).csbi.srWindow.Right))));
if(r<(0x01)) break;
}

k = ((*k).d);

return(0x01+(sync_coordinates_internal(coo,k,argp)));
}
