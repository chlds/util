# define CAW_H
# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl currently_occurring_error_mb_ok(signed(arg),void(*hdl),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed char caption[] = ("Error");
auto signed char with[] = ("with error no. ");
auto signed char a[] = (" ");
// if(!hdl) return(0x00);
if(!argp) return(message_box_mb_ok(hdl,"Oops..",caption));
if(!arg) return(message_box_mb_ok(hdl,argp,caption));
b = catha(argp,catha(a,catha(with,cv(0x00,currently_occurring_error()))));
r = message_box_mb_ok(hdl,b,caption);
embed(0x00,b);
rl(b);
b = (0x00);
return(r);
}
