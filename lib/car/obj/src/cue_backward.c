/*

Retrieve the leading address to a previous word.

Along with C library

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cue_backward(signed char(**retrv),signed char(*sym),signed char(*offset),signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed short flag;

/* **** CODE/TEXT */
if(!retrv) return(0x00);
if(!sym) return(0x00);
if(!offset) return(0x00);
if(!base) return(0x00);

AND(flag,0x00);
*retrv = (offset);

return(cue_backward_r(flag,retrv,sym,base));
}
