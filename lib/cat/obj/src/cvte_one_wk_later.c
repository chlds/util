# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_wk_later(time_t(arg))) {
auto time_t days = (60*(60*(24*(7))));
if(arg<(0x00)) return(0x00);
arg = (days+(arg));
if(arg<(0x00)) return(0x00);
return(arg);
}
