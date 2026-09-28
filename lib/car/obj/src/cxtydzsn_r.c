# define CAR_H
# include "./../../../config.h"

signed *(__cdecl cxtydzsn_r(signed long long(argq/*offset*/),signed(argt/*desc*/),void(*args/*arg*/),signed *(__cdecl*argp)(signed(args/*desc*/),void(*argt/*arg*/)))) {
if(!argp) return(0x00);
if(!(0x01+(sseek(argt,argq)))) return(0x00);
return(argp(argt,args));
}
