/* **** Notes

Count the letters to a letter you select.
*/


/*
# define C_CODE_STDS
# include "./../../../incl/config.h"
//*/

signed(__cdecl ct2(signed char(di), signed char(*base))) {

/* **** DATA, BSS and STACK */
if(!base) return(0x00);
if(!(*base)) return(0x00);

if(!(di^(*base))) return(0x00);

base++;
return(1+(ct2(di, base)));
}
