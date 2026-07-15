# define CAT_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl sundayweekdate(signed(args),time_t(argp))) {
auto signed char *b;
auto signed r;
auto signed e = (0x00);
auto signed char a[] = ("-");
if(argp<(0x00)) return(0x00);
r = civw(args,argp);
++r;
// if(!r) ADD(r,WEEKS);
b = cv(e,r);
return(catne(b,catna(a,weekdate_r(argp,args,sundayweeknumber(args,argp)))));
}
