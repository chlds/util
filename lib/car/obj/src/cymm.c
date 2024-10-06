# define CAR_H
# include "./../../../config.h"

signed(__cdecl cymm(signed(argt),signed char(*args),signed char(*argp))) {
auto signed r;
auto signed mask = (0xFF);
if(!(0x00<(argt))) return(0x00);
if(!args) return(0x00);
if(!argp) return(0x00);
r = (signed)(mask&(*args));
*argp = (signed char)(mask&(r));
argp++;
args++;
--argt;
return(0x01+(cymm(argt,args,argp)));
}
