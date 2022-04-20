/*

De-pin.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAW_H
# define DEPIN_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl depin_b_r(signed char(**argp))) {

auto void *g;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);
if(*argp) return(0x00);

g = clipboard_retrieve_w();
// if(!g) printf("%s \n","<< Error at fn. clipboard_retrieve_w()");

return(depin_b_rr(argp,g));
}
