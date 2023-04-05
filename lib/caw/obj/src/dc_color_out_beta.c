/* **** Notes

Paint
*/


# define CAR_H
# define CAW_H
# include "./../../../config.h"

signed(__cdecl dc_color_out_beta(signed(x),signed(y),signed(clr),void(*dc),signed char(*argp))) {
auto signed char *b;
auto signed short *w;
auto signed r;
if(!dc) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (argp);
w = (0x00);
cv_wb(&w,b);
r = dc_color_out_w_beta(x,y,clr,dc,w);
// embed_w_l(0x00,w);
rl(w);
w = (0x00);
b = (0x00);
return(r);
}
