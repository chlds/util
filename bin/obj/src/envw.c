/*

Display environment variables.
*/


# define CAR
# include "../../../lib/incl/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
AND(flag,0x00);
b = (0x00);
i = (0x00);
while(*(envp+(i))) {
r = encode_bw(&b,*(envp+(i)));
if(!r) {
printf("%s \n","<< Error at fn. encode_bw()");
return(0x00);
}
printf("%d. %s%d%s",i,"[",r,"] ");
r = cli_outs(b);
printf(" \n");
r = embed(0x00,b);
if(!r) {
printf("%s \n","<< Error at fn. embed()");
OR(flag,0x01);
}
rl(b);
b = (0x00);
if(flag) break;
i++;
}

printf("\n");
if(flag) return(0x00);

printf("%d %s \n",i,"environment variables");

return(0x00);
}
