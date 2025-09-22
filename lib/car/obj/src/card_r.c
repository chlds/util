# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl card_r(signed(args),signed(argp))) {
auto signed char *b = (0x00);
auto signed short hexa = (0x10);
auto signed short deci = (0x0A);
auto signed short bina = (0x02);
if(argp<(bina)) argp = (deci);
if(hexa<(argp)) argp = (deci);
return(card_rr(args,argp,cathy(b)));
}
