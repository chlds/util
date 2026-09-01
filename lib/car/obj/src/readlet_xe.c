# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl readlet_xe(signed char(*argt/*path*/),signed(args/*times*/),signed(argp/*offset*/))) {
auto signed r;
auto signed char perm[] = ("rdonly,binary");
AND(r,0x00);
LDL(r,args);
LDH(r,argp);
return(ctds(argt,perm,r,readletters));
}
