/* **** Notes

Count rows for words wrapped in the width

Remarks:
Refer at fn. cv_ww
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_ww(signed short(arg),signed char(*sym),signed char(*argp))) {
if(arg<(0x01)) return(0x00);
// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x01);
return(ct_ww_r(arg,sym,argp));
}
