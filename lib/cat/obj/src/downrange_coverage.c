# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl downrange_coverage(time_t(*argt),time_t(*args),time_t(*argp))) {
auto time_t te;
auto time_t day = (60*(60*(24)));
auto time_t days = (day*(7));
if(!argt) return(0x00);
if(!args) return(0x00);
te = (*args);
te = (0x01+(~te));
te = (te+(*argt));
if(te<(0x00)) return(0x00);
te = (te+(0x01+(~days)));
if(0x00<(te)) return(0x00);
return(downrange_coverage_r(argt,args,argp));
}
