/* **** Notes

Wrap
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl create_solid_pen_beta(signed(width),signed(color))) {
auto signed style = (PS_SOLID);
return(CreatePen(style,width,color));
}
