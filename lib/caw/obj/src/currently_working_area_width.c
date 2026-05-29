# define CAW_H
# define CAR_H
# include "./../../../config.h"

signed(__cdecl currently_working_area_width(void)) {
auto signed r;
r = currently_working_area(CAW_RIGHT);
return(r+(cii(currently_working_area(CAW_LEFT))));
}
