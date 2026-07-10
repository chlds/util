# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl spd(time_t(arg))) {
return(arg*(secondsperday()));
}
