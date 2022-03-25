/* **** Notes

Flag.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl lk_flags(signed short(*di),signed char(*si))) {

auto signed char **v;
auto signed r;
auto signed char *(cache[]) = {
(signed char(*)) ("a"),
(signed char(*)) ("i"),
(signed char(*)) ("r"),
(signed char(*)) ("u"),
(signed char(*)) ("v"),
(signed char(*)) ("d"),
(signed char(*)) (0x00),
};
auto signed short flags[] = {
(signed) (OPT_ATTRIBS),
(signed) (OPT_IGNORE),
(signed) (OPT_RECURSION),
(signed) (OPT_UNLIMITED),
(signed) (OPT_VERBOSE),
(signed) (OPT_DIRECTORIES),
(signed) (0x00),
};

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

r = flag_b(cache,flags,di,si);
if(!(EQ(r,ct_vb(cache)))) AND(r,0x00);

return(r);
}
