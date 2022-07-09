/* **** Notes

Confirm
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cf_no(signed char(*argp))) {
auto signed r;
auto signed char *fig = ("0123456789");
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = ord(fig,*argp);
if(!(r<(ct(fig)))) return(0x00);
return(0x01);
}
