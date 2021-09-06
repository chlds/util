/* **** Notes

Read content out of FILE in column.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl art_r(signed short(*flag),signed short(cols),signed char(*sym),signed(fd))) {

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x08);
auto signed const DELAY = (0x02*(QUANTUM));
auto signed short COLS = (72); // default
auto signed char *b;
auto signed i,r;

if(!flag) return(0x00);
if(!sym) return(0x00);

// if(COLS<(cols)) cols = (COLS);
if(cols<(0x01)) cols = (COLS);

return(art_r_r(flag,cols,sym,fd));
}
