/* **** Notes

Retrieve seconds of a first week of the first month.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CAR

# include <time.h>
# include "../../../incl/config.h"

signed(__cdecl find_a_first_month_internal(signed short(flag),signed short(mon),signed short(current_month),time_t(*argp),time_t(arg))) {

/* **** DATA, BSS and STACK */
auto signed short DECEMBER = (0x0B);
auto signed short JANUARY = (0x00);
auto signed MONTH = (0x0C);

auto struct tm *tp;
auto time_t t;
auto signed curr_m;
auto signed m,w;
auto signed d,h;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(arg<(0x00)) return(0x00);
if(current_month<(JANUARY)) return(0x00);
if(DECEMBER<(current_month)) return(0x00);
if(mon<(JANUARY)) mon = (JANUARY);
if(DECEMBER<(mon)) mon = (JANUARY);

h = (60*(60));
d = (24*(h));
w = (7*(d));

arg = (-w+(arg));
t = (arg);

tp = localtime(&t);
if(!tp) return(0x00);

arg = (t);

if(!(flag&(FIRST_B))) {
if(current_month<(R(tm_mon,*tp))) OR(flag,THIRD_B);
if(!(current_month^(R(tm_mon,*tp)))) {
if(flag&(SECOND_B)) OR(flag,THIRD_B);
}
if(flag&(THIRD_B)) {
*argp = (arg+(w));
return(0x01);
}}

else {
m = (R(tm_mon,*tp));
if(m<(current_month)) {
AND(flag,0x00);
OR(flag,SECOND_B);
}}

return(0x01+(find_a_first_month_internal(flag,mon,current_month,argp,arg)));
}
