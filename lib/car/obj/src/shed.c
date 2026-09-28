# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl shed(signed char(*arg))) {
if(!deref(arg)) return(arg);
*arg = db(deref(post(arg)));
return(ante(shed(++arg)));
}
