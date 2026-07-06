# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed long long(__cdecl secondsperday(void)) {
return(24*(secondsperhour()));
}
