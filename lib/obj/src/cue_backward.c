/*

Retrieve the leading address to a previous word.

Along with C library

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# include <stdio.h>
# include "../../../incl/cl.h"

signed(__cdecl cue_backward(signed char(**retrv),signed char(*base),signed char(*offset))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!retrv) return(0x00);
if(!base) return(0x00);
if(!offset) return(0x00);

flag = (0x00);
*retrv = (offset);

r = cue_backward_internal(flag,retrv,base);
if(!r) {
printf("%s\n","<< Error at fn. cue_backward_internal()");
return(0x00);
}

return(r);
}
