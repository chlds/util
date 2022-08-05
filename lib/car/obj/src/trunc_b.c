/* **** Notes

Truncate
*/


# define CAR_H
# define STDIO_H
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl trunc_b(signed char(*cache/* an extension for backups */),signed char(*path))) {
auto signed char *b;
auto signed r;
if(!path) return(0x00);
r = already_in_b(path);
if(!r) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file");
else printf("%s \n","<< Error at fn. already_in_b()");
return(0x00);
}
// backup
if(cache) {
r = backup_b(cache,path);
if(!r) {
// printf("%s \n","<< Error at fn. backup_b()");
// return(0x00);
// e.g., 0B written.
}}
return(trunc_b_r(path));
}
