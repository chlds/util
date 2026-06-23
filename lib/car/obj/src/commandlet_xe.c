# define CAR_H
# include <process.h>
# include "./../../../config.h"

void *(__cdecl commandlet_xe(signed(argt/*stacksize*/),void(*args),void(__cdecl*argp)(void(*args)))) {
auto void *v;
if(argt<(0x00)) AND(argt,0x00);
if(!argp) return(0x00);
v = (void*)(_beginthread(argp,argt,args));
return(v);
}
