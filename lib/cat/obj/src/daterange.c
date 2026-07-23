# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl daterange(signed(args),time_t(argp))) {
auto signed r;
auto signed char *(__cdecl*c)(signed(args),time_t(argp));
auto signed char *(__cdecl**d)(signed(args),time_t(argp));
auto signed char *(__cdecl*(e[]))(signed(args),time_t(argp)) = {
collapseddaterange,
expandeddaterange,
0x00,
};
if(argp<(0x00)) return(0x00);
d = (e);
r = civl(args,argp);
if(!(EQ(r,civl(args,onedayago(oneweeklater(argp)))))) d++;
c = (*d);
return(c(args,argp));
}
