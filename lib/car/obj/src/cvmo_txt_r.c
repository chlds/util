# define CAR_H
# define CALENDAR_INTL_H
# include "./../../../config.h"

signed(__cdecl cvmo_txt_r(signed char *argp)) {
auto signed char **(mon[]) = {
CALENDAR_MONTH_OLD_IN_EN,
CALENDAR_MON_OLD_IN_EN,
0x00,
};
return(cvmo_txt_rr(mon,argp));
}
