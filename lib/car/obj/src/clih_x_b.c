/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_x_b(void(*argp))) {
auto signed r;
auto coord_t coord;
// if(!argp) return(0x00);
if(!(es(CTRL_L))) return(0x00);
return(CTRL_X);
}
