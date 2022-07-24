/* **** Notes

Overwrite time

Remarks:
Return (~0x00) on failure
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_wk(signed short(arg),time_t(*argp))) {
auto signed r;
auto time_t t;
auto signed days = (0x07);
if(!(arg<(days))) return(~0x00);
if(arg<(0x00)) return(~0x00);
if(!argp) return(~0x00);
r = cal_by_wk(arg,*argp);
if(EQ(r,~0x00)) return(r);
t = (r*(24*(60*(60))));
t = (t+(*argp));
if(t<(0x00)) return(~0x00);
*argp = (t);
return(r);
}
