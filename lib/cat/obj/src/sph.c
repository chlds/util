# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl sph(time_t(arg))) {
return(arg*(secondsperhour()));
}
