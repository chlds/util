/* **** Notes

Flag
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_flag_c(cals_t(*argp))) {

auto cals_event_t *ev;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

AND(flag,0x00);
OR(flag,COLOR_BG_CYAN);
SHL(flag,0x08);
OR(flag,COLOR_BRIGHT_WHITE);
R(colors,*argp) = (flag);
AND(flag,0x00);

return(color_text(COLOR_RESET,COLOR_BG_RESET));
}
