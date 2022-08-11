/*

De-pin

Remarks:
Refer at fn. clipboard_map and clipboard_unmap
*/


# define DEPIN_H
# define CAR_H
# define CAW_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl depin_b(signed char(**argp))) {
auto void *v;
auto signed r;
if(!argp) return(0x00);
if(*argp) return(0x00);
v = currently_working_window();
if(!v) {
printf("%s \n","<< Error at fn. currently_working_window()");
return(0x00);
}
r = clipboard_map(v);
if(!r) {
printf("%s \n","<< Error at fn. clipboard_map()");
return(0x00);
}
r = depin_b_r(argp);
// if(!r) printf("%s \n","<< Error at fn. depin_b_r()");
if(!(clipboard_unmap())) {
printf("%s \n","<< Error at fn. clipboard_unmap()");
return(0x00);
}
return(r);
}
