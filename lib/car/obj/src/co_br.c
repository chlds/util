/*

Output code of line break
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl co_br(signed(arg))) {
if(arg) {
if(!(clear_rows(arg))) return(0x00);
}
if(!(es(CTRL_A))) return(0x00);
if(!(es(CTRL_N))) return(0x00);
return(0x01);
}
