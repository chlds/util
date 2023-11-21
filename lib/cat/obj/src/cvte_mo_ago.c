# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_mo_ago(time_t(args),signed(arg))) {
auto time_t te;
if(args<(0x00)) return(0x00);
if(!(0x00<(arg))) return(args);
te = (args);
te = cvte_one_mo_ago(te);
if(!te) return(te);
--arg;
return(cvte_mo_ago(te,arg));
}
