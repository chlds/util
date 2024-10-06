# define CAR_H
# include "./../../../config.h"

signed(__cdecl seylle_r(signed(argt),signed char(*args),signed char(*argp))) {
auto signed mask = (0xFF);
if(!(0x00<(argt))) return(0x00);
if(!args) return(0x00);
if(!argp) return(0x00);
*argp = (signed char)(mask&(ceylle(args++)));
--argt;
args++;
argp++;
return(0x01+(seylle_r(argt,args,argp)));
}
