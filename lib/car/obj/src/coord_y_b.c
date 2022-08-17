/*

Coordinate

Remarks:
Only in the Virtual Terminal
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_y_b(void)) {
auto signed r;
auto coord_t coord;
if(!(init_coord(&coord))) return(0x00);
if(!(coord_report(CLI_B,&coord))) return(0x00);
r = (*(CLI_B+(R(y,coord))));
return(r);
}
