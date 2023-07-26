# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed char *(__cdecl clih_i_except_r(signed char *argp)) {
auto signed char *b;
if(!argp) return(argp);
b = (argp);
if(!(*b)) return(b);
if(!(_kbhit())) return(b);
b = cat_xe(b,catt_bb(_getch()),(void*)0x00);
return(clih_i_except_r(b));
}
