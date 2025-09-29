# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_r(time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto time_t te;
auto signed char *neg = ("-");
auto signed char *pos = ("+");
auto signed char *(sgn[]) = {
neg,pos,0x00,
};
b = (0x00);
if(!argp) return(b);
w = (sgn);
te = (*argp);
if(!(te<(0x00))) w++;
b = cv_tz_rr(&te);
if(!b) return(b);
return(catha(*w,b));
}
