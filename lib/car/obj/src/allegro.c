/* Synopsis

Allegro, Andante, Adagio et Lento
A shallow copy
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl allegro(signed char(**args),signed char(**argp))) {
if(!argp) return(0x00);
*argp = cara_v(args);
return(*argp);
}
