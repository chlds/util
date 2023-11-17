# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_di_later(time_t(arg))) {
auto time_t day = (60*(60*(24)));
if(arg<(0x00)) return(0x00);
arg = (day+(arg));
if(arg<(0x00)) return(0x00);
return(arg);
}
