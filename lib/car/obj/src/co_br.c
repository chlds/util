/*

Output code of line break
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl co_br(void)) {
auto signed r;
if(!(es(CTRL_A))) return(0x00);
if(!(es(CTRL_N))) return(0x00);
return(0x01);
}
