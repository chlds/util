/* **** Notes

Clear rows
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl clear_rows_r(signed(arg))) {
if(arg<(0x01)) return(0x00);
if(!(es(CTRL_N))) return(0x00);
if(!(es(CTRL_K))) return(0x00);
return(0x01+(clear_rows_r(--arg)));
}
