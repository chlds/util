/* **** Notes

Overwrite time

Remarks:
Return (~0x00) on failure
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_wk_periodic(signed(ordinary),signed short(arg),time_t(*argp))) {
auto signed r;
auto time_t t;
auto signed days = (0x07);
if(ordinary<(0x01)) return(~0x00);
if(!(arg<(days))) return(~0x00);
if(arg<(0x00)) return(~0x00);
if(!argp) return(~0x00);
t = (*argp);
r = cal_crown_wk_periodic_r(ordinary,arg,&t);
if(EQ(r,~0x00)) return(r);
if(!t) return(~0x00);
*argp = (t);
return(0x01+(r));
}
