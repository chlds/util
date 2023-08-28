# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_indent_r(signed short(arg))) {
auto signed char *b = (" ");
auto signed r;
if(!arg) return(0x00);
r = cli_o_b(0x01,b);
// r = wrt(b,ctt(b));
if(!r) return(0x00);
return(r+(cli_indent_r(--arg)));
}
