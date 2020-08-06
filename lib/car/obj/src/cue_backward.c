/*

Retrieve the leading address to a previous word.

Along with C library

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# define CAR
# include "../../../incl/config.h"
# include <stdio.h>

signed(__cdecl cue_backward(signed char(**retrv),signed char(*sym),signed char(*base),signed char(*offset))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!retrv) return(0x00);
if(!sym) return(0x00);
if(!base) return(0x00);
if(!offset) return(0x00);

flag = (0x00);
*retrv = (offset);

r = cue_backward_internal(flag,retrv,sym,base);
if(!r) {
//* empty or..
printf("%s\n","<< Error at fn. cue_backward_internal()");
return(0x00);
//*/
}

return(r);
}
