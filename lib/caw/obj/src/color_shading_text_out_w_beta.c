/* **** Notes

Commandlet to output the local time
*/


# define CAW_H
# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl color_shading_text_out_w_beta(void(*dc),signed(x),signed(y),signed(bclr),signed(clr),signed short(*argp))) {
auto signed short *w;
if(!dc) return(0x00);
if(!argp) return(0x00);
w = (argp);
if(!(shading_text_out_w_beta(dc,x,y,w,ct_w(w),bclr))) return(0x00);
if(!(color_text_out_w_beta(dc,x,y,w,ct_w(w),clr))) return(0x00);
w = (0x00);
return(0x01);
}
