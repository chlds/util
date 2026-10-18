# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl daysleftintheyear(time_t(arg))) {
auto signed r;
auto signed days = (365);
if(arg<(0x00)) return(inv(0x00));
r = cii(inc(civa(CANONICAL,arg)));
if(!r) return(inv(r));
return(r+(days+(leapyear(ANCHORYEAR+(civy(CANONICAL,arg))))));
}
