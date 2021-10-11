/* **** Notes

Detect keys.
*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char *b,*p;
auto signed i,r;
auto signed short flag;

AND(flag,0x00);
while(0x01) {
b = (0x00);
if(flag) break;
r = cli_opt_b(&b,cli_i_b);
if(!r) OR(flag,0x01);
if(!flag) {
p = (b);
if(EQ(r,~0x00)) printf("00h ");
while(*p) {
printf("%02Xh ",0xFF&(*p));
p++;
}}
if(EQ('\r',*b)) OR(flag,0x01);
if(EQ('\n',*b)) OR(flag,0x01);
if(b) rl(b);
printf("\n");
}

printf("\n");
printf("Done ! \n");

return(0x01);
}
