/* **** Notes

Count

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_a(signed char(*argp))) {
auto signed r;
auto signed sequentialflag = (0x80);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = nbytechar(*argp);
if(!(sequentialflag^(r))) AND(r,0x00);
return(r);
}
