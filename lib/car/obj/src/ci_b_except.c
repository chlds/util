/*

Get a byte or bytes for one character based on UTF-8 out of the keyboard

Remarks:
Call fn. rl() later
Refer at fn. ci_b
Add an ESC (033) character if a meta key starting from (0x00) is detected
Call fn. _getch twice to read <Ctrl-@>
i.e., the first call returns (0x00)
..and the second call returns (0x03)
*/


# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed char *(__cdecl ci_b_except(void)) {
auto signed char *b;
b = (0x00);
if(!(cat_ab(&b,0x00))) {
printf("%s \n","<< Error at fn. cat_ab()");
return(0x00);
}
if(ci_b_except_r(&b)) b = cat_ahead(b,"\033");
// add an ESC character to the first byte of the meta key starting from (0x00)
return(b);
}
