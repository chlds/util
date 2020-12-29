/*

Display environment variables.
*/


# define CAR
# include "../../../lib/incl/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
i = (0x00);
while(*(envp+(i))) {
r = encode_bw(&p,*(envp+(i)));
if(!r) {
printf("%s \n","<< Error at fn. encode_bw()");
return(0x00);
}
printf("%d. %s%d%s",i,"[",r,"] ");
printf("%s \n",p);
r = embed(0x00,p);
if(!r) {
printf("%s \n","<< Error at fn. embed()");
return(0x00);
}
free(p);
i++;
}

printf("\n");
printf("%d %s \n",i,"environment variables");

return(0x01);
}
