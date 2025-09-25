# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl map_week_number_rr(signed(args),time_t(*argp))) {
auto signed r;
auto time_t t;
auto signed d = (0x00);
auto signed e = (1900);
if(!argp) return(0x00);
t = (*argp);
t = cvyr_wknum(t,args);
r = (e+(current_yr_b(DBG,&t)));
if(r<(e)) return(0x00);
return(cv(d,r));
}
