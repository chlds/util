# define CAR_H
# define STDIO_H
# include "./../../../lib/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {
auto signed char *b;
auto signed r;
auto signed lim;
auto signed deft = (1000); // default
auto signed radix = (0x0A);
auto signed thres = (100000);
AND(r,0x00);
lim = (deft);
if(!(EQ(0x01,argc))) {
b = (*(argv+(argc+(~0x00))));
if(cv_da(radix,&r,b)) lim = (r);
if(!(0x00<(lim))) lim = (deft);
}
AND(r,0x00);
if(thres<(lim)) lim = (thres);
printf("%s %d %s \n","Prime numbers up to",lim,"are");
while(!(lim<(r))) {
if(pn(r)) printf("%d, ",r);
r++;
}
printf("\n");
printf("Done! \n");
return(0x00);
}
