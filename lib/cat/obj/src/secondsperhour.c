# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed long long(__cdecl secondsperhour(void)) {
return(SECONDSPERMINUTE*(MINUTESPERHOUR));
}
