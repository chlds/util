/* **** Notes

Release
//*/


# define CALEND
# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cals_release_for_today(cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed char *b;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

free(R(b,R(today,*argp)));
R(b,R(today,*argp)) = (0x00);

return(0x01);
}
