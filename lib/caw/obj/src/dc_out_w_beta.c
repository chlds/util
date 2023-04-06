/* **** Notes

Paint
*/


# define CAW_H
# define CAR_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl dc_out_w_beta(signed(x),signed(y),void(*dc),signed short(*argp))) {
auto signed short *w;
auto signed r;
if(!dc) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
w = (argp);
r = TextOutW(dc,x,y,w,ct_w(w));
return(r);
}
