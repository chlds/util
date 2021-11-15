/*

Along with C library

Remarks:
Refer at util/lib/car/obj/src/xt.c
*/


# define CAR
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "../../../incl/config.h"

signed(__cdecl xt_parse_permission_w(signed(*retv),signed(*cache),signed char(*argp))) {

auto signed char *b;
auto signed i,l,r;
auto signed short flag;
auto signed acc [] = {
_S_IREAD,
_S_IWRITE,
0x00,
};
auto signed char *(acc_s[]) = {
("iread"),
("iwrite"),
(0x00),
};

if(!retv) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);

AND(*retv,0x00);
if(!(_O_CREAT&(*cache))) return(0x01);

AND(i,0x00);
while(*(i+(acc_s))) {
r = cmpr_part(&l,argp,*(i+(acc_s)));
// if(!r) return(0x00);
if(!l) OR(*retv,(*(i+(acc))));
i++;
}

return(0x01);
}
