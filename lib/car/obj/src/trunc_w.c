/* **** Notes

Truncate
*/


# define CAR_H
# define STDIO_H
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl trunc_w(signed short(*cache/* an extension for backups */),signed short(*path))) {
auto signed short *w;
auto signed r;
if(!path) return(0x00);
r = already_in_w(path);
if(!r) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file");
else printf("%s \n","<< Error at fn. already_in_w()");
return(0x00);
}
// backup
if(cache) {
r = backup_w(cache,path);
if(!r) {
// printf("%s \n","<< Error at fn. backup_w()");
// return(0x00);
// e.g., 0B written.
}}
return(trunc_w_r(path));
}
