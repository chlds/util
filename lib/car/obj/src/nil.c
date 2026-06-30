# define CAR_H
# define CMM(A,B) (B,A)
# include "./../../../config.h"

signed char *(__cdecl nil(signed char(*argp))) {
/* fair enough
if(argp) *argp = (0x00);
return(argp);
//*/
return(!argp?argp:CMM(argp,*argp = (0x00)));
}
