/* **** Notes

Coordinate
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_report_r(signed char(**argp))) {
if(!argp) return(0x00);
if(*argp) return(0x00);
return(coord_report_rr(argp));
}
