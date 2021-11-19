/* **** Notes

Load.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl ld_b_r(signed(fd),fl_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed offset;
auto signed range;
auto signed short flag;

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

*(CLI_SI+(R(fd,*argp))) = (fd);
offset = (*(CLI_OFFSET+(R(fd,*argp))));
r = cue_fd(offset,fd);
if(EQ(r,~0x00)) return(0x00);

range = (*(CLI_INDEX+(R(fd,*argp))));
b = (0x00);
r = rd_k(range,&b,fd);
if(!r) {
embed_l(0x00,b);
if(b) rl(b);
b = (0x00);
}

*(CLI_DI+(R(v,*argp))) = (void*) (b);
b = (0x00);

return(r);
}
