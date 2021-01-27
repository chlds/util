/* **** Notes

Get.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_get_frame(signed(arg),cli_frame_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(__cdecl*(fn[]))(signed(arg),cli_frame_t(*argp)) = {
cli_get_coord,
cli_get_rect,
cli_get_pixel,
0x00,
};

auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

AND(i,0x00);
while(*(fn+(i))) {
r = (*(fn+(i++)))(arg,argp);
if(!r) break;
}

return(r);
}
