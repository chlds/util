/* **** Notes

Count

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cara_b(signed char *argp)) {
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(0x00);
r = (signed)(mask&(*argp));
return(r);
}
