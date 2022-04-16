/* **** Notes

Wrap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl create_window_beta(
signed char(*cn),signed char(*wn),signed(styl),
signed(x),signed(y),signed(w),signed(h),
void(*parent),void(*menu),void(*inst),void(*lp)
)) {
return(CreateWindow(cn,wn,styl,x,y,w,h,parent,menu,inst,lp));
}
