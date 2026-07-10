# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl spa(time_t(arg))) {
return(arg*(secondsperyear()));
}
