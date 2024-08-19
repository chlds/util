# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvyrwknum_te_r(signed char(**args),signed(argp))) {
auto signed char *b;
auto signed digit = (0x02);
auto signed char sepr[] = ("-W");
if(!args) return(0x00);
if(!(*args)) return(*args);
b = cv(digit,argp);
if(!b) return(*args);
cat_b(args,sepr,b,(void*)0x00);
embed(0x00,b);
rl(b);
b = (*args);
return(b);
}
