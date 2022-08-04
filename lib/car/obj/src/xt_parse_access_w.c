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

signed(__cdecl xt_parse_access_w(signed(*retv),signed char(*argp))) {
auto signed char *b;
auto signed i,r;
auto signed char *(acc_s[]) = {
("creat"),
("excl"),
("append"),
("trunc"),
("rdonly"),
("wronly"),
("rdwr"),
("binary"),
("text"),
(0x00),
};
auto signed acc[] = {
_O_CREAT,
_O_EXCL,
_O_APPEND,
_O_TRUNC,
_O_RDONLY,
_O_WRONLY,
_O_RDWR,
_O_BINARY,
_O_TEXT,
0x00,
};
if(!retv) return(0x00);
if(!argp) return(0x00);
AND(*retv,0x00);
AND(i,0x00);
while(*(i+(acc_s))) {
cmpr_part(&r,argp,*(i+(acc_s)));
if(!r) OR(*retv,(*(i+(acc))));
i++;
}
return(0x01);
}
