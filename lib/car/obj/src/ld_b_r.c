/* **** Notes

Load.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl ld_b_r(signed(fd),fl_t(*argp))) {

auto signed char *b;
auto signed char *delim;
auto signed *d;
auto signed r;
auto signed range;
auto signed short flag;
auto size_t offset;

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

// *(CLI_SI+(R(fd,*argp))) = (fd);
d = (signed*) (*(CLI_INDEX+(R(v,*argp))));
r = cv_sd(&offset,d);
if(!r) {
printf("%s \n","<< Error at fn. cv_sd()");
return(0x00);
}

if(DBG) printf("[%s: %zu] \n","Offset",offset);

r = cue_fd(offset,fd);
if(EQ(r,~0x00)) return(0x00);

delim = (signed char(*)) (*(CLI_LEAD+(R(v,*argp))));
range = (*(CLI_INDEX+(R(fd,*argp))));
b = (0x00);
r = rd_k(&b,delim,range,fd);
if(!r) {
embed_l(0x00,b);
if(b) rl(b);
b = (0x00);
}

*(CLI_DI+(R(v,*argp))) = (void*) (b);
b = (0x00);

return(r);
}
