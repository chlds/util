/* Synopsis

Check the ordinal number
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ordr_part(signed char(**args),signed char(*argp))) {
if(!args) return(0x00);
if(!(*args)) return(0x00);
if(!(cmpe_part(*args,argp))) return(0x00);
return(0x01+(ordr_part(++args,argp)));
}
