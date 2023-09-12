/* Notes

Count letters to the terminating null character
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cnttxt(signed char *argp)) {
if(!argp) return(0x00);
r = caract(cara(cara_b(argp)));
if(!r) return(r);
argp = (r+(argp));
return(0x01+(cnttxt(argp)));
}
