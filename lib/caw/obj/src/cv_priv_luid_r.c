/*

Retrieve the name that corresponds to the privilege represented on a specific system by a specified locally unique identifier (LUID).

Remarks:
Call fn. rl later.
Refer at fn. cv_luid_priv.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl cv_priv_luid_r(signed char(*di),signed(arg),signed(low),signed(high))) {

auto signed char *b;
auto signed size;
auto signed r;
auto signed short flag;
auto LUID luid;
auto signed char *sys_name = (0x00);

if(!di) return(0x00);
if(arg<(0x01)) return(0x00);
// if(!low) return(0x00);
// if(!high) return(0x00);

size = (arg);
R(LowPart,luid) = (unsigned) (low);
R(HighPart,luid) = (high);
r = LookupPrivilegeName(sys_name,&luid,di,&size);
if(!r) {
r = currently_occurring_error();
if(!(EQ(ERROR_SUCCESS,r))) {
printf("%s %d %s %Xh \n","<< Error at fn. LookupPrivilegeName() with no.",r,"or",r);
return(0x00);
}}

return(r);
}
