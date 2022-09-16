/* Notes

Decrease or increase the priority.
*/


# define CBR
# include <stdio.h>
# include <windows.h>
# include "./../../../incl/config.h"

signed(__cdecl td_priority(signed(arg))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed p1,p2,p3,p4,p5,p6,p7;
auto signed *(priors[]) = {
&p1,&p2,&p3,&p4,&p5,&p6,&p7,0x00,
};
auto signed prior[] = {
THREAD_PRIORITY_IDLE,
THREAD_PRIORITY_LOWEST,
THREAD_PRIORITY_BELOW_NORMAL,
THREAD_PRIORITY_NORMAL,
THREAD_PRIORITY_ABOVE_NORMAL,
THREAD_PRIORITY_HIGHEST,
THREAD_PRIORITY_TIME_CRITICAL,
0x00,
};

if(!arg) return(0x00);

r = ct_v_d(priors);
if(!r) return(0x00);

while(r) **(r+(priors)) = (*(--r+(prior)));

// thread priorities
r = GetThreadPriority(GetCurrentThread());
if(!(r^(THREAD_PRIORITY_ERROR_RETURN))) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetThreadPriority() with no.",r,"or",r);
return(0x00);
}

r = ord_d_v(priors,r);
if(r<(ct_v_d(priors))) {
if(arg<(0x00)) --r;
else r++;
}

if(r<(0x00)) return(0x00);
if(!(r<(ct_v_d(priors)))) return(0x00);

if(DBG) printf("%s %d/%Xh \n","<< td_priority:",*(r+(prior)),*(r+(prior)));

r = SetThreadPriority(GetCurrentThread(),*(r+(prior)));
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetThreadPriority() with no.",r,"or",r);
return(0x00);
}

return(r);
}
