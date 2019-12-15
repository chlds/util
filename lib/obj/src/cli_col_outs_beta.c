/*

Output characters based on UTF-8 to the console screen.

Remarks:
Based on fn. cli_col_out_beta
Return the number of bytes for output characters (..or the number of output characters).
*/


# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_col_outs_beta(signed char(*cur),CLI_W32_STAT(*argp))) {

auto signed char *p;
auto signed c,i,r;

if(!cur) return(0x00);
if(!argp) return(0x00);

if(!(*cur)) return(0x00);

c = (c^(c)); // to total the characters
i = (i^(i)); // to total the bytes for characters
p = (cur);

while(0x01) {
if(!(*p)) break;
r = cli_col_out_beta(p,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_col_out_beta()");
return(0x00);
}
p = (p+(r));
i = (i+(r));
c++;
}

// e.g., return(c);
return(i);
}
