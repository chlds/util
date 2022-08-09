/* **** Notes

Coordinate
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_report_r_r(signed(arg),coord_t(*di),signed char(*si))) {
auto signed char *b;
auto signed i,r;
if(arg<(0x00)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
b = (si);
r = cv_da_first(0x0A,&i,b);
if(!r) return(0x00);
b = (r+(b));
if(arg<(OBJS)) *(arg+(R(y,*di))) = (signed short) (i);
else {
r = (OBJS);
while(r) *(--r+(R(y,*di))) = (signed short) (i);
}
r = cv_da_first(0x0A,&i,b);
if(!r) return(0x00);
if(arg<(OBJS)) *(arg+(R(x,*di))) = (signed short) (i);
else {
r = (OBJS);
while(r) *(--r+(R(x,*di))) = (signed short) (i);
}
b = (0x00);
return(0x01);
}
