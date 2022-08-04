/*

Along with C library
*/


# define CAR_H
# define STDIO_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl xt_parse_permission(signed(*retv),signed(*cache),signed char(*argp))) {
auto signed char *b;
auto signed i,r;
auto signed char *(acc_s[]) = {
("iread"),
("iwrite"),
(0x00),
};
auto signed acc[] = {
S_IREAD,
S_IWRITE,
0x00,
};
if(!retv) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
AND(*retv,0x00);
if(!(O_CREAT&(*cache))) return(0x01);
AND(i,0x00);
while(*(i+(acc_s))) {
cmpr_part(&r,argp,*(i+(acc_s)));
if(!r) OR(*retv,(*(i+(acc))));
i++;
}
return(0x01);
}
