/*

Output characters based on UTF-8 to the console screen.

Remarks:
Return the number of bytes for output characters (..or the number of output characters).
*/


# include <stdio.h>

signed(__cdecl cli_outs(signed char(*argp))) {

auto signed char *p;
auto signed c,i,r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

c = (c^(c)); // to total the characters
i = (i^(i)); // to total the bytes for characters
p = (argp);

while(0x01) {
if(!(*p)) break;
r = cli_out(p);
if(!r) {
printf("%s\n","<< Error at fn. cli_out()");
return(0x00);
}
p = (p+(r));
i = (i+(r));
c++;
}

// e.g., return(c);
return(i);
}
