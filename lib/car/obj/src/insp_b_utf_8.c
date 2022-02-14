/* **** Notes

Inspect the byte order.
*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl insp_b_utf_8(signed(fd),void(*argp))) {

auto signed *d;
auto signed r;
auto size_t s;

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

AND(s,0x00);
d = (signed*) (argp);
r = cv_sd(&s,d);
if(!r) {
printf("%s \n","<< Error at fn. cv_sd()");
return(0x00);
}

AND(r,0x00);
OR(r,0x01);
SHL(r,0x07);

return(insp_b_utf_8_r(r,fd,s));
}
