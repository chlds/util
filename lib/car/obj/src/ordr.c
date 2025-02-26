/* Synopsis

Check the ordinal number
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ordr(signed char(**args),signed char(*argp))) {
if(!args) return(0x00);
if(!(*args)) return(0x00);
if(!(cmpe(*args,argp))) return(0x00);
return(0x01+(ordr(++args,argp)));
}
