# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed long long(__cdecl secondsperhalfday(void)) {
return(SECONDSPERMINUTE*(MINUTESPERHOUR*(HOURSPERHALFDAY)));
}
