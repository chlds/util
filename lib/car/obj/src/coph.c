/* Notes

Calc. of push


Remarks:
difference between __cdecl and __attribute__((ms_abi))
*/


# define CAR_H
# define STDARG_H
# include "./../../../config.h"

signed(__cdecl coph(signed char *argp,...)) {
if(!argp) return(0x00);
return(coph_r(&argp));
}
