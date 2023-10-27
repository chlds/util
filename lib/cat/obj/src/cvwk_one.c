# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvwk_one(signed(args),time_t(argp))) {
auto struct tm *t;
auto time_t te;
auto signed day;
auto signed di;
auto THDR_T f;
auto signed monday = (0x01);
auto time_t days = (60*(60*(24*(7))));
if(!(0x00<(argp))) return(0x00);
day = arrwk(args);
te = (argp);
te = cvte_midnight(cvte_wk(day,cvte_di(cvte_mo(te))));
if(!te) return(te);
f = cvte_time();
if(!f) return(0x00);
t = f(&te);
if(!t) return(0x00);
di = (R(tm_mday,*t));
day = (26);
if(EQ(monday,arrwk(args))) day = (29);
if(di<(day)) te = (days+(te));
if(EQ(1,di)) te = (te+(0x01+(~days)));
if(!(argp<(te))) return(te);
te = (te+(0x01+(~days)));
return(cvwk_one(args,te));
}
