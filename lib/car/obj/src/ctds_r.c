# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl ctds_r(signed(argt/*desc*/),signed(args/*arg*/),signed char *(__cdecl*argp)(signed(args/*desc*/),signed(argt/*arg*/)))) {
if(!argp) return(0x00);
if(!(0x01+(sseek(argt,carh(args))))) return(0x00);
return(argp(argt,carl(args)));
}
