/* **** Notes

Convert.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_l(signed char(*di_tbl),signed char(*si_tbl),signed char(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di_tbl) return(0x00);
if(!si_tbl) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

r = ct(di_tbl);
if(r^(ct(si_tbl))) return(0x00);

return(cv_l_r(r,di_tbl,si_tbl,di,si));
}
