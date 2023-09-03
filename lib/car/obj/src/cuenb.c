# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuenb(signed char *argp)) {
auto signed char *b;
auto signed r;
auto signed char *(num[]) = {
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
0x00,
};
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = casca(argp);
r = ords(num,b);
rl(b);
b = (0x00);
if(!(r<(ct_v(num)))) return(0x00);
r = ct_a(argp);
if(!r) return(0x00);
argp = (r+(argp));
return(r+(cuenb(argp)));
}
