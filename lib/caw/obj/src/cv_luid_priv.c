/*

Retrieve the locally unique identifier (LUID) used on a specified system to locally represent the specified privilege name.

Remarks:
Refer at fn. cv_priv_luid.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl cv_luid_priv(signed(*low),signed(*high),signed char(*si))) {

auto signed char *b;
auto signed size;
auto signed r;
auto signed short flag;
auto LUID luid;
auto signed char *sys_name = (0x00);

if(!low) return(0x00);
if(!high) return(0x00);
if(!si) return(0x00);

b = (si);
r = LookupPrivilegeValue(sys_name,b,&luid);
if(!r) {
r = currently_occurring_error();
if(!(EQ(ERROR_SUCCESS,r))) {
printf("%s %d %s %Xh \n","<< Error at fn. LookupPrivilegeValue() with no.",r,"or",r);
return(0x00);
}}

*low = (signed) (R(LowPart,luid));
*high = (R(HighPart,luid));

return(r);
}
