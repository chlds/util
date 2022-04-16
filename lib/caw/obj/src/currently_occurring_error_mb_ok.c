/* **** Notes

Wrap.
*/


# define CAW_H
# define STDIO_H
# define STDLIB_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_occurring_error_mb_ok(signed(arg),void(*hdl),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed char buff[0x20+(0x100)];
auto signed char *caption = ("Error");

// if(!hdl) return(0x00);
if(!argp) return(message_box_mb_ok(hdl,"Oops..",caption));

r = currently_occurring_error();
b = (argp);
if(0x100<(ct(b))) return(message_box_mb_ok(hdl,"Oops..",caption));
if(arg) sprintf(buff,"%s %s %d ",b,"with error no.",r);
else sprintf(buff,"%s ",b);

b = (buff);

return(message_box_mb_ok(hdl,b,caption));
}
