/* **** Notes

Overwrite time

Remarks:
Return (~0x00) on failure
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_crown_mo(signed short(arg),time_t(*argp))) {
auto signed r;
auto time_t t;
auto signed short months = (0x0C);
auto signed short dec = (0x0B);
auto signed short jan = (0x00);
if(!(arg<(months))) return(~0x00);
if(arg<(jan)) return(~0x00);
if(!argp) return(~0x00);
t = (*argp);
r = cal_crown_mo_r(arg,&t);
if(EQ(r,~0x00)) return(r);
if(EQ(t,~0x00)) return(~0x00);
*argp = (t);
return(r);
}
