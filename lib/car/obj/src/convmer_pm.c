# define CAR_H
# include "./../../../config.h"

signed(__cdecl convmer_pm(signed arg)) {
auto signed mer = (12);
auto signed hrs = (24);
if(!(arg<(hrs))) return(~0x00);
if(arg<(0x00)) return(~0x00);
arg = (arg%(mer));
arg = (arg+(mer));
return(arg);
}
