# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_mo_r(time_t(args),signed(argp))) {
auto time_t day = (60*(60*(24)));
if(args<(0x00)) return(args);
if(!(0x00<(argp))) return(args);
args = cvte_di(args);
args = (args+(0x01+(~(day))));
--argp;
return(cvte_mo_r(args,argp));
}
