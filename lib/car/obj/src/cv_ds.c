/* **** Notes

Convert.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ds(signed char(*argp),signed char(di),signed char(si))) {

auto signed r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(r,0x00);
while(*(r+(argp))) {
if(EQ(si,*(r+(argp)))) *(r+(argp)) = (di);
r++;
}

return(r);
}
