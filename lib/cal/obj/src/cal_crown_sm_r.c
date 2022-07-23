/* **** Notes

Overwrite time

Remarks:
Keep running
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_sm_r(signed short(arg),time_t(*argp))) {
auto struct tm *tp;
auto signed short sm;
auto time_t t;
if(!argp) return(0x00);
t = (0x00);
if(arg) t = (arg);
t = (t+(*argp));
tp = localtime(&t);
if(!tp) return(0x00);
sm = (R(tm_sec,*tp));
if(!(EQ(arg,sm))) {
t = (0x00);
// return(0x00);
}
*argp = (t);
return(0x01);
}
