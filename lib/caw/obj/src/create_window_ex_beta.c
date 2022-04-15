/* **** Notes

Wrap.
*/


# include "./incl/config.h"

void *(__cdecl create_window_ex_beta(
signed(xstyl),signed char(*cn),signed char(*wn),signed(styl),
signed(x),signed(y),signed(w),signed(h),
void(*parent),void(*menu),void(*inst),void(*lp)
)) {
return(CreateWindowEx(xstyl,cn,wn,styl,x,y,w,h,parent,menu,inst,lp));
}
