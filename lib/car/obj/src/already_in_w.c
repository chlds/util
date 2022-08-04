/* **** Notes

Already in existence or under..
*/


# define CAR_H
# define TIME_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl already_in_w(signed short(*argp))) {
auto struct _stati64 stats;
if(!argp) return(0x00);
if(!(0x01+(_wstati64(argp,&stats)))) return(0x00);
return(0x01);
}
