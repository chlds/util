# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ctwk(signed(args),time_t(argp))) {
auto struct tm *t;
auto time_t te;
auto signed day;
auto signed di;
auto signed mo;
auto THDR_T f;
auto signed monday = (0x01);
auto signed december = (0x0B);
if(!(0x00<(argp))) return(0x00);
day = arrwk(args);
te = (argp);
te = cvte_midnight(cvte_wk(day,te));
f = cvte_time();
if(!f) return(0x00);
t = f(&te);
if(!t) return(0x00);
di = (R(tm_mday,*t));
mo = (R(tm_mon,*t));
if(EQ(december,mo)) {
day = (26);
if(EQ(monday,arrwk(args))) day = (29);
if(!(di<(day))) return(0x01);
}
return(ctwk_r(args,argp));
}
