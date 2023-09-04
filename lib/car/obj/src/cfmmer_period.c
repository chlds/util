# define CAR_H
# include "./../../../config.h"

signed(__cdecl cfmmer_period(signed char(**argp),signed(__cdecl*f)(signed char(**argp)))) {
auto signed char *b;
auto signed char period[] = (".");
if(!argp) return(0x00);
b = (*argp);
if(!b) return(0x00);
if(cmp_b(period,b)) return(0x00);
argp++;
return(f(argp));
}
