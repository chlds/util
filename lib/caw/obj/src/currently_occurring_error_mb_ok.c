/* **** Notes

Wrap
*/


# define CAW_H
# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl currently_occurring_error_mb_ok(signed(arg),void(*hdl),signed char(*argp))) {
auto signed char *b;
auto signed char *a;
auto signed r;
auto signed char caption[] = ("Error");
auto signed char with[] = ("with error no. ");
// if(!hdl) return(0x00);
if(!argp) return(message_box_mb_ok(hdl,"Oops..",caption));
b = (0x00);
a = (b);
if(!arg) r = message_box_mb_ok(hdl,argp,caption);
else {
r = currently_occurring_error();
a = cv(0x00,r);
cat_b(&b,argp," ",with,a,(void*)0x00);
r = message_box_mb_ok(hdl,b,caption);
}
embed(0x00,a);
embed(0x00,b);
rl(b);
rl(a);
a = (0x00);
b = (a);
return(r);
}
