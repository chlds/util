/* **** Notes

Output.

Remarks:
A character string should be terminated with the null character.
Refer at fn. cv_ww, fn. read_b and fn. rm_crlf to replace CR/LF with the null character.
Return the number of rows output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl out_argt_r(signed short(cols),signed char(**argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *br = ("\n");
auto signed(__cdecl*f)(signed short(cols),signed char(**argp));
auto signed(__cdecl*(fn[]))(signed short(cols),signed char(**argp)) = {
out_argt_line,
out_argt_line_limited,
0x00,
};

if(cols<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(r,0x00);
if(cols<(ct(*argp))) OR(r,0x01);
f = (*(r+(fn)));
r = f(cols,argp);
argp = (r+(argp));
if(!r) return(0x00);
// if(!(cli_es(CTRL_K))) return(0x00);

if(*argp) {
if(!(cli_o_b(0x01,br))) return(0x00);
}

return(0x01+(out_argt_r(cols,argp)));
}
