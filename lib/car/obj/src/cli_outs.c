/*

Output characters based on UTF-8 to the console screen.

Remarks:
Return the number of bytes for output characters (..or the number of output characters).
*/


# include <stdio.h>

signed(__cdecl cli_outs(signed char(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = cli_out(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_out()");
return(0x00);
}

argp = (r+(argp));

// e.g., r = (0x01);
return(r+(cli_outs(argp)));
}
