# define CAR_H
# include "./../../../config.h"

signed(__cdecl step(signed char(*arg))) {
auto signed r;
r = hop(arg);
return(r+(hop(arg+(r))));
}
