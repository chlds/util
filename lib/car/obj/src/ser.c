/* Synopsis

Serialise

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl ser(signed char(**arg))) {
auto signed char *b;
b = (0x00);
if(!arg) return(b);
if(!(*arg)) return(b);
return(ser_r(arg,cath("",b)));
}
