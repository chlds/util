/* Notes

Retrieve one byte

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl seekb(signed arg/* fd */)) {
auto signed char b;
auto signed r;
auto signed mask = (0xFF);
r = rd_b(arg,&b,sizeof(b));
if(!r) return(0x00);
if(!(0x01+(r))) return(0x00);
r = (signed)(b);
r = (mask&(r));
return(r);
}
