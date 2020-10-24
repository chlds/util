/* **** Notes

Convert to a month out of characters.
//*/


# include "../../../incl/config.h"

signed(__cdecl cv_mo(signed short(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char *(MON[]) = {
"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC",(signed char(*)) (0x00),
};

auto signed char *(Mon[]) = {
"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec",(signed char(*)) (0x00),
};

auto signed char **(mon[]) = {
Mon,MON,(signed char(**)) (0x00),
};

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

*di = (~0x00);

r = cv_mo_internal(mon,di,si);

return(r);
}
