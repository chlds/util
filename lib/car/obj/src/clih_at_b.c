/* **** Notes

Return (0x00)

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_at_b(void(*argp))) {
if(!argp) return(0x00);
return(CTRL_AT);
}
