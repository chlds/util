# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl rmwbyw_xe(signed char(*arg))) {
auto signed char *b;
b = rmwbyw(arg);
arg = lethe(arg);
return(b);
}
