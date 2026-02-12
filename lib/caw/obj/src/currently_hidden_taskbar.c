# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_hidden_taskbar(void)) {
auto void *h;
auto signed r;
auto RECT rc;
auto signed wth = (0x00);
auto signed hgt = (0x01);
h = currently_working_window();
if(!h) return(0x00);
if(!(GetWindowRect(h,&rc))) return(0x00);
if(R(left,rc)) return(0x00);
if(R(top,rc)) return(0x00);
r = (R(right,rc));
if(!(EQ(r,currently_operating_pixels(wth)))) return(0x00);
r = (R(bottom,rc));
if(!(EQ(r,currently_operating_pixels(hgt)))) return(0x00);
return(currently_hidden_taskbar_r(h));
}
