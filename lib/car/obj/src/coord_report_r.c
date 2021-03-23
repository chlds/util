/* **** Notes

Coordinate.
*/


# define CAR
# include <io.h>
# include "./../../../incl/config.h"

signed(__cdecl coord_report_r(signed(arg),signed char(*cache),coord_t(*argp))) {

auto signed char *b;
auto signed i,r;

if(arg<(0x00)) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);

b = (cache);
r = cv_da_first(0x0A,&i,b);
if(!r) return(0x00);

b = (r+(b));
if(arg<(CLI_OBJS)) *(arg+(R(y,*argp))) = (signed short) (i);
else {
r = (CLI_OBJS);
while(r) *(--r+(R(y,*argp))) = (signed short) (i);
}

r = cv_da_first(0x0A,&i,b);
if(!r) return(0x00);
if(arg<(CLI_OBJS)) *(arg+(R(x,*argp))) = (signed short) (i);
else {
r = (CLI_OBJS);
while(r) *(--r+(R(x,*argp))) = (signed short) (i);
}

b = (0x00);

return(0x01);
}
