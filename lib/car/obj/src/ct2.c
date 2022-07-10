/* **** Notes

Count letters to a letter you select
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct2(signed char(di),signed char(*base))) {
if(!base) return(0x00);
if(!(*base)) return(0x00);
if(!(di^(*base))) return(0x00);
base++;
return(0x01+(ct2(di,base)));
}
