# define CAT_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl weekdate_r(time_t(argt),signed(args),signed(argp))) {
auto signed char *b;
auto signed r;
auto signed e = (1900);
auto signed c = (0x02);
auto signed char a[] = ("-W");
if(argt<(0x00)) return(0x00);
r = civy(args,argt);
if(EQ(JANUARY,civl(args,argt))) {
if(!(argp<(4*(13)))) --r;
}
if(EQ(DECEMBER,civl(args,argt))) {
if(EQ(0x01,argp)) ++r;
}
ADD(r,e);
b = catna(a,cv(c,r));
return(cathe(b,cv(c,argp)));
}
