# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_ad(time_t(arg))) {
auto time_t day = (60*(60*(24)));
arg = (arg+(0x01+(~day)));
if(arg<(0x00)) return(0x00);
return(arg);
}
