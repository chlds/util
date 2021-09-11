/* **** Notes

Sleep for Linux.
*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include <time.h>
# include "./../../../incl/config.h"
// # include "./incl/car.h"

signed(__cdecl msleep(signed(arg))) {

/*
auto struct timespec t;
auto signed long criterion = (1000*(1000));
auto signed long m = (1000);
if(arg<(0x00)) arg = (0x01+(~arg));
t.tv_nsec = (0x00);
t.tv_sec = (0x00);
if(arg<(m)) t.tv_nsec = (criterion*(arg));
else {
t.tv_sec = (arg/(m));
t.tv_nsec = (criterion*(arg%(m)));
}
if(DBG) {
printf("[t.tv_sec : %ld] \n",t.tv_sec);
printf("[t.tv_nsec: %ld] \n",t.tv_nsec);
}
return(nanosleep(&t,0x00));
//*/

return(0x01);
}
