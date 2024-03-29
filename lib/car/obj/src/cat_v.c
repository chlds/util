/* **** Notes

Concatenate to the terminating null pointer

Remarks:
Call fn. rl later
Based on UTF-8
Add an ABI attribute of functions to both the declaration and definition 
of variadic functions to compile C source files with GCC on WSL (Ubuntu 64-bit)
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_v(signed(arg/* code of line break */),signed char(*argp/* separator */),signed char(**di),signed char(**si))) {
auto signed char *b;
auto signed char *crlf = ("\r\n");
auto signed char *lf = ("\n");
// if(!argp) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) {
if(arg) {
b = (lf);
if(!(EQ(LF,arg))) b = (crlf);
if(!(cat_a_b(di,b))) return(0x00);
b = (0x00);
}
return(0x00);
}
b = (*si);
si++;
if(!(cat_a_b(di,b))) return(0x00);
if(*si) {
if(argp) {
if(!(cat_a_b(di,argp))) return(0x00);
}}
return(0x01+(cat_v(arg,argp,di,si)));
}
