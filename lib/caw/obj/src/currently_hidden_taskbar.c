# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_hidden_taskbar(void)) {
auto signed r;
auto RECT rc;
auto signed wth = (0x00);
auto signed hgt = (0x01);
if(!(GetWindowRect(currently_working_window(),&rc))) return(0x00);
if(R(left,rc)) return(0x00);
if(R(top,rc)) return(0x00);
r = (R(right,rc));
if(!(EQ(r,currently_operating_pixels(wth)))) return(0x00);
r = (R(bottom,rc));
if(!(EQ(r,currently_operating_pixels(hgt)))) return(0x00);
return(0x01);
}
