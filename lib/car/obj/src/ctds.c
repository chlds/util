# define CAR_H
# define STDIO_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../config.h"

signed char *(__cdecl ctds(signed char(*argq/*path*/),signed char(*argt/*perm*/),signed(args/*arg*/),signed char *(__cdecl*argp)(signed(args/*desc*/),signed(argt/*arg*/)))) {
auto signed char *b;
auto signed ac;
auto signed pm;
auto signed r;
auto struct _stati64 stats;
if(!argq) return(0x00);
if(!argt) return(0x00);
b = (0x00);
if(!(0x01+(_stati64(argq,&stats)))) {
if(!(EQ(ENOENT,errno))) {
if(DBG_M&(DBG)) printf("%s %Xh \n","<< Error at fn. _stati64() with errno.",errno);
return(b);
}}
AND(pm,0x00);
if(!xt_parse(&pm,&ac,argt)) {
if(DBG_M&(DBG)) printf("%s \n","<< Error at fn. xt_parse()");
return(b);
}
r = op_b(argq,&ac,&pm,(void*)(0x00));
if(!(0x01+(r))) {
if(DBG_M&(DBG)) {
printf("%s %Xh \n","<< Error at fn. op_b() with errno.",errno);
if(EQ(EEXIST,errno)) printf("%s \n","Error: Already in existence");
}
return(b);
}
if(r) b = ctds_r(r,args,argp);
if(!(0x01+(cl_b(r)))) {
if(DBG_M&(DBG)) printf("%s %Xh \n","<< Error at fn. cl_b() with errno.",errno);
embed_l(0x00,b);
rl(b);
b = (0x00);
}
return(b);
}
