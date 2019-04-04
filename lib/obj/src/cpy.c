/* **** **** **** **** Refer on

Copy to the <di> out of the <si>

//*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


short signed(__cdecl cpy(char signed(*di), char signed(*si))) {

auto char signed(cache);

if(!di) return(NIL);
if(!si) return(NIL);

if(!(*si)) {
*di = (NIL);
return(NIL);
}

cache = (*si);
*di = (cache);

(di++);
(si++);

return(1+(cpy(di, si)));
}
