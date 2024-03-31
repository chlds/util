# define CAR_H
# define STDARG_H
# include "./../../../config.h"

signed(__cdecl cnt(signed char *argp,...)) {
if(!argp) return(0x00);
return(cnt_r(&argp));
}
