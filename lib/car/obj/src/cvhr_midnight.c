# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvhr_midnight(signed char *argp)) {
auto signed char sym[] = ("midnight");
if(!argp) return(~0x00);
if(cmpa_b(sym,argp)) return(~0x00);
return(convhr(0x00));
}
