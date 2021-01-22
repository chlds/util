/* **** Notes

Replace text attributes.

Remarks:
Refer at fn. cli_restore_text_attributes_beta.
*/


# define CAR
# include "./../../../incl/config.h"
# include <stdio.h>
# include <windows.h>

signed(__cdecl cli_replace_text_attributes_beta(signed(arg),cli_property_t(*argp))) {

auto signed color[] = {
FOREGROUND_RED,
FOREGROUND_GREEN,
FOREGROUND_BLUE,
FOREGROUND_INTENSITY,
BACKGROUND_RED,
BACKGROUND_GREEN,
BACKGROUND_BLUE,
BACKGROUND_INTENSITY,
0x00,
};

auto signed color_hex[] = {
0x01,0x02,0x04,0x08,
0x10,0x20,0x40,0x80,
0x00,
};

auto CONSOLE_SCREEN_BUFFER_INFO csbi;
auto signed i,r;

if(!argp) return(0x00);

if(!(CLI_INIT&(*(CLI_BASE+(R(flag,*argp)))))) return(0x00);

r = GetConsoleScreenBufferInfo(*(CLI_OUT+(R(device,*argp))),&csbi);
if(!r) return(0x00);

r = (R(wAttributes,csbi));
R(attribute,R(text,*argp)) = (r);
OR(R(flag,R(text,*argp)),CLI_BACKUP);

if(!arg) r = (R(attribute,R(text,*argp)));
else {
AND(i,0x00);
AND(r,0x00);
while(*(color_hex+(i))) {
if(arg&(*(color_hex+(i)))) OR(r,*(color+(i)));
i++;
}}

r = SetConsoleTextAttribute(*(CLI_OUT+(R(device,*argp))),r);
if(!r) return(0x00);

return(0x01);
}
