/* **** Notes

Text attributes

Remarks:
Virtual Terminal
*/


# define STDIO_H
# include "./../../../config.h"

signed(__cdecl color_text(signed(fg),signed(bg))) {
auto signed r;
r = color_text_fg(fg);
if(!r) {
printf("%s \n","<< Error at fn. color_text_fg()");
return(0x00);
}
r = color_text_bg(bg);
if(!r) {
printf("%s \n","<< Error at fn. color_text_bg()");
return(0x00);
}
return(0x01);
}
