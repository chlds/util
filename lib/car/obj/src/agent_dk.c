/* **** Notes

Detect keys.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_dk(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char *b,*p;
auto signed r;
auto signed short flag;
auto signed char *announce = ("The sequence of three bytes EFh BFh BDh in UTF-8 represents the Unicode Replacement Character U+FFFD.");

if(!(clear_rows(0x00))) return(0x00);

printf("[%s] \n",announce);
printf("\n");

AND(flag,0x00);
while(0x01) {
b = (0x00);
if(flag) break;
r = cli_i_b(&b);
if(!r) OR(flag,0x01);
if(EQ('\r',*b)) OR(flag,0x01);
if(EQ('\n',*b)) OR(flag,0x01);
if(!flag) {
if(!(agent_dk_r(r,b))) {
printf("%s \n","<< Error at fn. agent_dk_r()");
OR(flag,0x01);
}}
embed(0x00,b);
rl(b);
if(!flag) printf("\n");
}

printf("\n");
printf("Done ! \n");

return(0x01);
}
