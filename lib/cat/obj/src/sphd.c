# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl sphd(time_t(arg))) {
return(arg*(secondsperhalfday()));
}
