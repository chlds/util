/*

Get a byte or bytes for one character based on UTF-8 out of the keyboard

Remarks:
Call fn. rl() later
Refer at fn. cli_i
Add an ESC (033) character if a meta key starting from (0xE0) is detected
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cin_b(void)) {
auto signed char *b;
auto signed r;
b = ci_b();
if(!b) return(b);
if(EQ(0xE0,*b)) {
if(!(EQ(0x03,ct(b)))) b = cat_ahead(b,"\033");
// add an ESC character to the first byte of the meta key starting from (0xE0)
}
return(b);
}
