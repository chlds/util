/* **** Notes

Paint
*/


# define CAW_H
# define CAR_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl dc_color_out_w_beta(signed(x),signed(y),signed(clr),void(*dc),signed short(*argp))) {
auto signed short *w;
auto signed old;
auto signed r;
if(!dc) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
w = (argp);
old = SetTextColor(dc,clr);
if(EQ(CLR_INVALID,old)) return(0x00);
r = TextOutW(dc,x,y,w,ct_w(w));
old = SetTextColor(dc,old);
if(EQ(CLR_INVALID,old)) return(0x00);
return(r);
}
