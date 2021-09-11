/* **** Notes

Coordinate.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl coord_report(signed(arg),coord_t(*argp))) {

auto signed char *p;
auto signed i,r;
auto signed char *b = ("\033[6n");
auto signed delim = ('R');
auto signed size = (0x10);

if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

r = wr_b(CLI_OUT,b,ct(b));
if(!(r^(~0x00))) return(0x00);

b = (signed char(*)) alloc(size);
if(!b) return(0x00);

p = (b);
i = (size);
while(--i) {
r = _getch();
*b = (signed char) (r);
if(!(delim^(r))) *b = (0x00);
if(!(*b)) break;
b++;
}

if(i) {
r = coord_report_r(arg,p,argp);
if(!r) AND(i,0x00);
}

embed(size,p);
if(!(rl(p))) return(0x00);

p = (0x00);
b = (p);

if(!i) return(0x00);

return(0x01);
}
