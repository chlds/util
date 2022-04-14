/*

Open.

Remarks:
Refer at fn. currently_working_window and clipboard_unmap.
*/


# define CAR
# include "./../../../incl/config.h"
# include "./incl/config.h"

signed(__cdecl clipboard_map(void(*argp))) {

auto void *v;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

v = (argp);
r = OpenClipboard(v);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. OpenClipboard() with no.",r,"or",r);
return(0x00);
}

return(0x01);
}
