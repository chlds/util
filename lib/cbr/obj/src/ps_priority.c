/* Notes

Decrease or increase the priority.
*/


# define CBR
# include <stdio.h>
# include <windows.h>
# include "./../../../incl/config.h"

signed(__cdecl ps_priority(signed(arg))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed prior[] = {
IDLE_PRIORITY_CLASS,
BELOW_NORMAL_PRIORITY_CLASS,
NORMAL_PRIORITY_CLASS,
ABOVE_NORMAL_PRIORITY_CLASS,
HIGH_PRIORITY_CLASS,
REALTIME_PRIORITY_CLASS,
0x00,
};

if(!arg) return(0x00);

// process priorities
r = GetPriorityClass(GetCurrentProcess());
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetPriorityClass() with no.",r,"or",r);
return(0x00);
}

r = ord_d(prior,r);
if(r<(ct_d(prior))) {
if(arg<(0x00)) --r;
else r++;
}

if(r<(0x00)) return(0x00);
if(!(r<(ct_d(prior)))) return(0x00);

if(DBG) printf("%s %d/%Xh \n","<< ps_priority:",*(r+(prior)),*(r+(prior)));

r = SetPriorityClass(GetCurrentProcess(),*(r+(prior)));
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetPriorityClass() with no.",r,"or",r);
return(0x00);
}

return(r);
}
