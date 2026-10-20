# define CAR_H
# include "./../../../config.h"

signed(__cdecl ra(signed char(*args),signed(argp))) {
auto signed r;
auto signed u = (UNARY);
auto signed b = (BINARY);
r = counc(args);
return(r<(b)?u:argp<(b)?b:r<(argp)?r:argp);
}
