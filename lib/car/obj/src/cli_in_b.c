/* **** Notes

Retrieve bytes input out of the keyboard

Remarks:
Return (0x00) on failure
Based on UTF-8
An ESC (033) character
has placed in the first byte of the meta key
starting with (0xE0) or with (0x00)
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cli_in_b(void)) {
return(cin_b());
}
