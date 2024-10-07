/* Synopsis

Count text per line
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cnttpl(signed char(*arg))) {
if(!arg) return(0x00);
if(!(*arg)) return(0x00);
if(EQ('\r',*arg)) return(0x00);
if(EQ('\n',*arg)) return(0x00);
arg++;
return(0x01+(cnttpl(arg)));
}
