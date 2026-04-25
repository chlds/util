/* Synopsis

Return (~0x00) on failure
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl current_hr(void(*args),signed(argp))) {
auto struct tm *e;
if(!args) return(~0x00);
e = describe_time(args,argp);
if(!e) return(~0x00);
return(R(tm_hour,*e));
}
