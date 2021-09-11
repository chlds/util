/* **** Notes

Read one line out of the standard input.

di: Put a buffer at.
size: Put the buffer size at.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl reading(signed char(*di),signed(size))) {

auto signed r;

if(!di) return(0x00);
if(size<(0x01)) return(0x00);

r = rd_b(CLI_IN,di,size);
if(!r) return(0x00);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. rd_b()");
return(0x00);
}

if(r<(size)) {
if(!(CR^(*(di+(r+(~0x00)))))) *(di+(r+(~0x00))) = ('\0');
if(!(LF^(*(di+(r+(~0x00)))))) *(di+(r+(~0x00))) = ('\0');
}
else {
printf("%s \n","<< Oops!");
return(0x00);
}

return(r);
}
