/* **** Notes

Wrap.
*/

# define CCR
# include <stdio.h>
# include <stdlib.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl currently_occurring_error_mb_ok(void(*hdl))) {

auto signed char *b;
auto signed r;
auto signed char buff[0x100];
auto signed char *caption = ("Error");
auto signed type = (MB_OK);

// if(!hdl) return(0x00);

r = currently_occurring_error();
sprintf(buff,"%s %d ","Error no.",r);
b = (buff);

return(message_box_beta(hdl,b,caption,type));
}
