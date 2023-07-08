/*

Get a byte or bytes for one character based on UTF-8 out of the keyboard

Remarks:
Call fn. rl() later
Refer at fn. cli_i
Call fn. _getch twice to read <Ctrl-@>
The first call returns (0x00) and the second call returns (0x03)..
Replace the leading byte of a meta key starting from (0x00) with ESC
Along with clih_utf_8
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl clih_i(void)) {
return(clih_i_r());
}
