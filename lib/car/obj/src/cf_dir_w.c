/* **** Notes

Confirm
*/


# define CAR_H
# define STDIO_H
# include <stddef.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl cf_dir_w(signed short(*argp))) {
auto size_t size;
auto signed char *dir = ("dir");
if(!argp) return(0x00);
if(!(already_w(&size,argp))) return(0x00);
return(cf_ff_w(argp,dir));
}
