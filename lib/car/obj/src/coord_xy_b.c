/*

Coordinate

Remarks:
Only in the Virtual Terminal
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_xy_b(signed(x),signed(y))) {
auto coord_t coord;
if(x<(0x01)) return(0x00);
if(y<(0x01)) return(0x00);
if(!(init_coord(&coord))) return(0x00);
*(CLI_B+(R(x,coord))) = (x);
*(CLI_B+(R(y,coord))) = (y);
return(coord_b(CLIH_IN,CLI_B,&coord));
}
