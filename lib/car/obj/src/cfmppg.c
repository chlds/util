/* Notes

Confirm a parent page
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cfmppg(pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
if(!argp) return(0x00);
p = (argp);
b = (*(CLIH_BASE+(R(b,*p))));
if(b) return(0x00);
return(0x01);
}
