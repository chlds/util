/* **** Notes

Text attributes.

Remarks:
Virtual Terminal
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_color_text(signed(fg),signed(bg))) {

auto signed i,r;

r = cli_color_fg(fg);
if(!r) {
printf("%s \n","<< Error at fn. cli_color_fg()");
return(0x00);
}

r = cli_color_bg(bg);
if(!r) {
printf("%s \n","<< Error at fn. cli_color_bg()");
return(0x00);
}

return(0x01);
}
