/* **** Notes

Wrap
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void*(__cdecl create_font_bold_beta(signed(height),signed(width),signed char(*argp))) {

// auto signed height = (21);
// auto signed width = (7);
auto signed escapement = (0x00);
auto signed orientation = (0x00);
auto signed weight = (FW_BOLD);
auto unsigned italic = (0x00);
auto unsigned underline = (0x00);
auto unsigned strikeout = (0x00);
auto unsigned charset = (ANSI_CHARSET);
auto unsigned outprecision = (OUT_TT_ONLY_PRECIS);
auto unsigned clipprecision = (0x00);
auto unsigned quality = (0x00);
auto unsigned pitch_and_family = (0x00);
// auto signed char facename[] = ("Tahoma");

if(!argp) return(0x00);
// quality = (ANTIALIASED_QUALITY);
return(
CreateFont(
height,width,\
escapement,orientation,weight,italic,underline,strikeout,\
charset,outprecision,clipprecision,quality,pitch_and_family,\
argp));
}
