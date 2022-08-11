/*

Retrieve the name that corresponds to the privilege represented on a specific system by a specified locally unique identifier (LUID)

Remarks:
Call fn. rl later
Refer at fn. cv_luid_priv
*/


# define CAW_H
# define CAR_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl cv_priv_luid(signed char(**di),signed(low),signed(high))) {
auto signed char *b;
auto signed size;
auto signed r;
auto LUID luid;
auto signed char *sys_name = (0x00);
if(!di) return(0x00);
if(*di) return(0x00);
// if(!low) return(0x00);
// if(!high) return(0x00);
AND(size,0x00);
b = (0x00);
R(LowPart,luid) = (unsigned) (low);
R(HighPart,luid) = (high);
r = LookupPrivilegeName(sys_name,&luid,b,&size);
if(!r) {
r = currently_occurring_error();
if(!(EQ(ERROR_SUCCESS,r))) {
if(!(EQ(ERROR_INSUFFICIENT_BUFFER,r))) {
printf("%s %d %s %Xh \n","<< Error at fn. LookupPrivilegeName() with no.",r,"or",r);
return(0x00);
}}}
r = (size);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
r = cv_priv_luid_r(b,r,low,high);
if(!r) {
printf("%s \n","<< Error at fn. cv_priv_luid_r()");
rl(b);
b = (0x00);
}
*di = (b);
return(r);
}
