/*

Retrieve an address of the previous word.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_prev_word(signed char(**retrv),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!retrv) return(0x00);
if(!argp) return(0x00);

b = (*(CLI_INDEX+(R(cur,*argp))));
if(EQ(b,*(CLI_BASE+(R(base,R(roll,*argp)))))) {
*retrv = (*(CLI_BASE+(R(base,R(roll,*argp)))));
return(0x01);
}

r = cli_prev_word_internal(retrv,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_prev_word_internal()");
return(0x00);
}

return(r);
}
