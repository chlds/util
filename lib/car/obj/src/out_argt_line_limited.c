/* **** Notes

Output.

Remarks:
A character string should be terminated with the null character.
Refer at fn. cv_ww, fn. read_b and fn. rm_crlf to replace CR/LF with the null character.
Return the number of rows output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl out_argt_line_limited(signed short(cols),signed char(**argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(cols<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

b = (*argp);
r = out_argt_line_limited_r(cols,b);
if(!r) return(r);

return(0x01);
}
