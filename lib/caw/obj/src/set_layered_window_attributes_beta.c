/* **** Notes

Wrap.

Remarks:
A layered window is created by specifying WS_EX_LAYERED.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl set_layered_window_attributes_beta(void(*hdl),signed(trans),signed char(alpha),signed(arg))) {

if(!hdl) return(0x00);

if(arg) {
if(arg<(0x00)) arg = (0x00);
if(EQ(0x01,arg)) arg = (LWA_COLORKEY);
if(EQ(0x02,arg)) arg = (LWA_ALPHA);
if(0x02<(arg)) arg = (LWA_ALPHA|(LWA_COLORKEY));
}

return(SetLayeredWindowAttributes(hdl,trans,alpha,arg));
}
