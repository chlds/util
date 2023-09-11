/* Notes

Retrieve one letter

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl seekl(signed arg/* fd */)) {
auto signed r;
if(arg<(0x00)) return(0x00);
r = seekb(arg);
if(!r) return(r);
r = caract(cara(r));
if(!r) return(r);
return(0x01+(seekl_r(arg,r)));
}
