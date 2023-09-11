/* **** Notes

Filter out

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl caract(signed arg)) {
auto signed seq = (0x80);
if(!(seq^(arg))) AND(arg,0x00);
return(arg);
}
