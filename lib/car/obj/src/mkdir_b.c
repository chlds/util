# define CAR_H
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <direct.h>
# include "./../../../config.h"

signed(__cdecl mkdir_b(signed char(*args),void(*argp))) {
auto signed char *b;
auto signed r;
if(!args) return(0x00);
if(!argp) return(0x00);
r = (*(signed*)(argp));
b = (args);
// r = mkdir(b,r);
r = _mkdir(b);
b = (0x00);
return(r);
}
