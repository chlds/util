/* **** Notes

Set code page for console input/output in UTF-8

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl clih_utf_8(void(*argp),signed(__cdecl*f)(void(*argp)))) {
return(clih_utf_8_r(argp,f));
}
