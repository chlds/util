# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed char *(__cdecl clih_i_except(void)) {
auto signed char *b;
auto signed r;
AND(r,0x00);
OR(r,ESC);
b = catt_bb(r);
if(!b) return(b);
return(clih_i_except_r(b));
}
