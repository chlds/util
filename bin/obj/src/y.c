# define CAR_H
# define CAT_H
# define TIME_H
# define STDIO_H
# include <errno.h>
# include <string.h>
# include "./../../../lib/config.h"

signed(__cdecl ff(void(*argp))) {
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed mask = (0xFF);
AND(flag,0x00);
b = clih_i();
if(!b) return(0x00);
if(EQ(CR,mask&(*b))) OR(flag,0x01);
if(EQ(LF,mask&(*b))) OR(flag,0x01);
if(EQ(0x01,ct(b))) {
if(EQ(ESC,mask&(*b))) OR(flag,0x01);
}
if(!flag) r = clih_o(100,b);
rl(b);
b = (0x00);
if(flag) return(0x00);
return(0x01+(ff(argp)));
}

signed(__cdecl f(void(*argp))) {
auto signed r;
r = ff(argp);
printf("\n");
printf("\n");
printf("r = ff(argp): %d \n",r);
return(0x01);
}

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {
auto signed r;
r = clih_utf_8(0x00,f);
printf("r = clih_utf_8(0x00,f): %d \n",r);
printf("\n");
printf("Done ! \n");
return(0x00);
}
