/* **** Notes

Place
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl caret_b(signed(x),signed(y))) {
auto signed r;
auto coord_t coord;
if(x<(0x01)) return(0x00);
if(y<(0x01)) return(0x00);
if(!(init_coord(&coord))) return(0x00);
*(CLI_B+(R(y,coord))) = (y);
*(CLI_B+(R(x,coord))) = (x);
r = coord_b(CLIH_OUT,CLI_B,&coord);
if(!r) return(0x00);
return(0x01);
}
