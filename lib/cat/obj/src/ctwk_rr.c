# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ctwk_rr(time_t(args),time_t(argp))) {
auto signed r;
auto time_t te;
auto time_t days = (60*(60*(24*(7))));
if(!(0x00<(args))) return(0x00);
if(!(0x00<(argp))) return(0x00);
te = (argp);
te = (te+(0x01+(~args)));
if(te<(0x00)) return(0x00);
r = (te/(days));
r++;
return(r);
}
