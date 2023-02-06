/* **** Notes

Convert into an ordinal number of the day of the week of the month from the time
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ct_wk_mo(time_t(*argp))) {
auto time_t t;
if(!argp) return(0x00);
t = (*argp);
return(ord_di_wk(t));
}
