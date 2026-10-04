# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl reversewords(signed char(*arg))) {
auto signed char *b;
if(!arg) return(arg);
b = convey(arg,hop(arg));
if(!deref(b)) return(b);
return(catne(b,reversewords(arg+(counc(b)))));
}
