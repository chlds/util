# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl map_week_number_xe_r(signed(args),time_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed d = (0x02);
auto signed char h[] = {
0xE2,0x82,0x8B,0x00,
};
auto signed char w[] = {
0xE1,0xB4,0xA1,0x00,
};
if(args<(0x00)) return(0x00);
r = ct_wk(args,argp);
if(!r) return(0x00);
b = cv(d,r);
return(catne(b,catna(w,catna(h,map_week_number_xe_rr(r,argp)))));
}
