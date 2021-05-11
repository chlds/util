/* **** Notes

Refer.
*/


# define CAR
# include <stdlib.h>
# include "./../../../incl/config.h"

signed char(*__cdecl rf_env(signed char(*argp))) {

if(!argp) return(0x00);

return(getenv(argp));
}
