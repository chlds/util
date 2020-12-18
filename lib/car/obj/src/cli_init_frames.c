/* **** Notes

Initialise
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_init_frames(cli_frame_t(*argp))) {

auto signed i,r;

if(!argp) return(0x00);

AND(R(flag,*argp),0x00);

i = (CLI_OBJS);
while(i) {
*(--i+(R(x,R(coord,*argp)))) = (0x00);
*(i+(R(y,R(coord,*argp)))) = (0x00);
}

i = (CLI_OBJS);
while(i) {
*(--i+(R(left,R(rect,*argp)))) = (0x00);
*(i+(R(top,R(rect,*argp)))) = (0x00);
*(i+(R(right,R(rect,*argp)))) = (0x00);
*(i+(R(bottom,R(rect,*argp)))) = (0x00);
}

i = (CLI_OBJS);
while(i) {
*(--i+(R(x,R(pixel,*argp)))) = (0x00);
*(i+(R(y,R(pixel,*argp)))) = (0x00);
}

R(optl,*argp) = (0x00);

OR(R(flag,*argp),CLI_INIT);

return(0x01);
}
