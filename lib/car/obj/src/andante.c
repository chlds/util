/* Synopsis

Allegro, Andante, Adagio et Largo
A shallow copy
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl andante(signed char(*args),signed char(**argp))) {
if(!argp) return(0x00);
*argp = (args);
return(*argp);
}
