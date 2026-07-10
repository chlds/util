# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl spm(time_t(arg))) {
return(arg*(secondsperminute()));
}
