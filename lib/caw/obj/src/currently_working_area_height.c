# define CAW_H
# define CAR_H
# include "./../../../config.h"

signed(__cdecl currently_working_area_height(void)) {
auto signed r;
r = currently_working_area(CAW_BOTTOM);
return(r+(cii(currently_working_area(CAW_TOP))));
}
