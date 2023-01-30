/* **** Notes

Count

Remarks:
Advanced or delayed in increments of half an hour
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl add_tz(signed(arg),time_t(*di),time_t(*si))) {
auto signed r;
auto time_t t;
auto time_t noon = (12*(60*(60)));
auto time_t day = (24*(60*(60)));
if(!di) return(0x00);
if(!si) return(0x00);
if(!(0x00<(*si))) AND(*si,0x00);
r = ct_tz(di,si);
if(!r) return(0x00);
arg = (arg%(2*(24)));
t = (30*(60*(time_t)(arg)));
t = (t+(*di));
if(t<(0x00)) t = (day+(t));
if(!(t<(noon))) t = (t+(0x01+(~day)));
*di = (t);
return(r);
}
