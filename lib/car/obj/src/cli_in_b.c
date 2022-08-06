/* **** Notes

Append bytes input out of the keyboard

Remarks:
Based on UTF-8
Return a number of bytes on one character, or meta keys started from (0xE0)
Return a negative value on meta keys started from (0x00)
Return (0x00) on failure
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_in_b(signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
b = (0x00);
r = cli_i_b(&b);
if(!r) {
printf("%s \n","<< Error at fn. cli_i_b()");
return(0x00);
}
// Currently under construction
if(!(cat_a_b(argp,b))) {
printf("%s \n","<< Error at fn. cat_a_b()");
AND(r,0x00);
}
embed(0x00,b);
rl(b);
b = (0x00);
return(r);
}
