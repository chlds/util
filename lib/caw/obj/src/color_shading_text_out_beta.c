/* **** Notes

Paint
*/


# define CAR_H
# define CAW_H
# include "./../../../config.h"

signed(__cdecl color_shading_text_out_beta(void(*dc),signed(x),signed(y),signed(bclr),signed(clr),signed char(*argp))) {
auto signed char *b;
auto signed short *w;
auto signed r;
if(!dc) return(0x00);
if(!argp) return(0x00);
b = (argp);
w = (0x00);
cv_wb(&w,b);
r = color_shading_text_out_w_beta(dc,x,y,bclr,clr,w);
// embed_w_l(0x00,w);
rl(w);
w = (0x00);
b = (0x00);
return(r);
}
