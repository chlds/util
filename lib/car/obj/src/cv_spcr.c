/* **** Notes

Replace CR with SP.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cv_spcr(signed char(*argp))) {

auto signed char *b;
auto signed i,r;

if(!argp) return(0x00);

return(cv_ds_f(argp,SP,CR));
}
