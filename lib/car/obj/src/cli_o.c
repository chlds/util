/*

Output one character based on UTF-8 to the console screen.

Remarks:
Return the number of bytes.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_o(signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed SEQ_FLAG = (0x80);

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = nbytechar(*argp);
if(!(SEQ_FLAG^(r))) {
printf("%s\n","<< Error at fn. nbytechar() returned with a sequential (0x80) byte");
return(0x00);
}
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(r);
}

r = wr_b(CLI_OUT,argp,r);
if(!r) {
printf("%s \n","<< Error at fn. wr_b()");
return(0x00);
}

return(r);
}
