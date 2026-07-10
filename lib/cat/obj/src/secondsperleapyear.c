# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed long long(__cdecl secondsperleapyear(void)) {
return(SECONDSPERMINUTE*(MINUTESPERHOUR*(HOURSPERDAY*(DAYSPERLEAPYEAR))));
}
