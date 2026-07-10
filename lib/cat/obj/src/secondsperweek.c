# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed long long(__cdecl secondsperweek(void)) {
return(SECONDSPERMINUTE*(MINUTESPERHOUR*(HOURSPERDAY*(DAYSPERWEEK))));
}
