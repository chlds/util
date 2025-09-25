# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl map_week_number_r(signed(args),time_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed d = (0x02);
auto signed char a[] = ("-w");
if(args<(0x00)) return(0x00);
r = ct_wk(args,argp);
if(!r) return(0x00);
b = cv(d,r);
return(catne(b,catna(a,map_week_number_rr(r,argp))));
}
