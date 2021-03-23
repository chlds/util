/* **** Notes

Coordinate.
*/


# define CAR
# include <io.h>
# include "./../../../incl/config.h"

signed(__cdecl coord_report(signed(arg),coord_t(*argp))) {

auto signed char *b = ("\033[6n");
auto signed delim = ('R');
auto signed char buff[0x10];
auto signed i,r;

if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

r = write(0x01,b,ct(b));
if(!(r^(~0x00))) return(0x00);

b = (buff);
i = (0x10);
while(--i) {
r = _getch();
*b = (signed char) (r);
if(!(delim^(r))) *b = (0x00);
if(!(*b)) break;
b++;
}

if(!i) return(0x00);

b = (buff);
r = cv_da_first(0x0A,&i,b);
if(!r) return(0x00);
if(arg<(CLI_OBJS)) *(arg+(R(y,*argp))) = (signed short) (i);
else {
b = (r+(b));
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

return(0x01);
}
