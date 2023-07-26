# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_o_ctrl_key(signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!arg) return(0x00);
if(!argp) return(0x00);
b = (argp);
if(!(*b)) return(0x00);
r = ct(b);
if(!(EQ(0x01,r))) {
printf("%s \n","<< Error at fn. clih_o_ctrl_key()");
return(0x00);
}
if(DBG) {
printf("[");
printf("%s: %Xh ","Ctrl",0xFF&(*b));
printf("] ");
}
return(r);
}
