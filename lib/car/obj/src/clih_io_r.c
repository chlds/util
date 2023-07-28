# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_io_r(signed(arg),signed char(**argp))) {
auto signed r;
auto signed x,y;
if(!arg) return(0x00);
if(!argp) return(0x00);
x = coord_x_b();
y = coord_y_b();
r = clih_io_rr(arg,argp);
if(!r) return(r);
if(EQ(CTRL_Q,r)) return(CTRL_Q);
if(EQ(CTRL_Z,r)) {
if(!(caret_b(x,y))) {
printf("%s \n","<< Error at fn. caret_b()");
return(0x00);
}}
return(clih_io_r(arg,argp));
}
