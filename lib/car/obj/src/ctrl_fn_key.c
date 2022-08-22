/* **** Notes

Run in an array of function pointers.

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_fn_key(signed(arg),void(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed short flag;
if(arg&(~CTRL_MASK)) return(0x00);
if(!argp) return(0x00);
return(ctrl_fn_key_r(arg,argp));
}
