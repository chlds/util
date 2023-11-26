# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_downrange_accuracy_r(time_t(args),signed(arg))) {
auto time_t te;
auto time_t day = (60*(60*(24)));
auto signed days = (0x07);
if(args<(0x00)) return(0x00);
if(!arg) return(args);
te = (args);
arg = arrwk(arg);
if(!arg) OR(arg,days);
te = (te+(arg*(day)));
return(te);
}
