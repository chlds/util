# define CAR_H
# include "./../../../config.h"

signed(__cdecl coincide(signed char(*args),signed char(*argp))) {
if(detectnull(args,argp)) return(0x00);
return(!cmpe(args,argp));
}
