# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz_rrr(time_t(*args),signed char(*argp))) {
auto signed char *b;
auto time_t te;
if(!args) return(argp);
te = (*args);
if(te<(0x00)) te = (0x01+(~te));
b = cv_tz_mn(CAT_SCALE,&te);
if(!b) return(argp);
if(!argp) argp = cath("00",(void*)(0x00));
if(EQ(0x01,ct(argp))) argp = cat_xe(cath("0",(void*)(0x00)),argp,(void*)(0x00));
return(cat_xe(argp,cath(":",(void*)(0x00)),b,(void*)(0x00)));
}
