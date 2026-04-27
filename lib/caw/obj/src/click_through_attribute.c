# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl click_through_attribute(void(*args),signed(argp))) {
auto signed long r;
if(!args) return(0x00);
r = GetWindowLong(args,GWL_EXSTYLE);
OR(r,WS_EX_TRANSPARENT);
if(!argp) AND(r,~WS_EX_TRANSPARENT);
SetWindowLong(args,GWL_EXSTYLE,r);
return(0x01);
}
