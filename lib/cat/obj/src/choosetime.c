# define CAT_H
# define TIME_H
# include "./../../../config.h"

void*(__cdecl choosetime(signed(arg))) {
auto void *c;
auto void **d;
auto void *(e[]) = {
localtime,
gmtime,
0x00,
};
d = (e);
if(!arg) d++;
c = (*d);
return(c);
}
