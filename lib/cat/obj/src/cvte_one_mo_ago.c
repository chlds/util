# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_mo_ago(time_t(arg))) {
return(cvte_one_mo(arg,cvte_one_mo_ago_r));
}
