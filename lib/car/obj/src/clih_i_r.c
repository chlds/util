# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed char *(__cdecl clih_i_r(void)) {
auto signed char *b;
auto signed r;
b = (0x00);
r = _getch();
if(!r) OR(r,ESC);
b = catt_bb(r);
if(!b) return(b);
return(clih_i_rr(b));
}
