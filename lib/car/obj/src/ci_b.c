/*

Get a byte or bytes for one character based on UTF-8 out of the keyboard

Remarks:
Call fn. rl() later
Refer at fn. cli_i
Add an ESC (033) character if a meta key starting from (0x00) is detected
Call fn. _getch twice to read <Ctrl-@>
i.e., the first call returns (0x00)
..and the second call returns (0x03)
*/


# define CAR_H
# include <conio.h>
# include "./../../../config.h"

signed char *(__cdecl ci_b(void)) {
auto signed r;
r = _getch();
if(!r) return(ci_b_except());
// Ctrl-@ or one of meta keys starting from (0x00)
return(ci_b_r(r));
}
