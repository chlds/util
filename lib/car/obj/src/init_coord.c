/*

Initialise
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl init_coord(coord_t(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = (OBJS);
while(r) {
--r;
*(r+(R(y,*argp))) = (0x00);
*(r+(R(x,*argp))) = (0x00);
}
return(0x01);
}
