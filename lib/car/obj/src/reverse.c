# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl reverse(signed char(*arg))) {
auto signed char *b;
if(!arg) return(arg);
b = casca(arg);
if(!deref(b)) return(b);
return(catne(b,reverse(arg+(counc(b)))));
}
