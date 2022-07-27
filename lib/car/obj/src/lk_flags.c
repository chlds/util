/* **** Notes

Flag
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl lk_flags(signed short(*di),signed char(*si))) {

auto signed r;
auto signed char *(v[]) = {
"a","i","r","u","v","d",0x00,
};
auto signed short fl[] = {
OPT_ATTRIBS,
OPT_IGNORE,
OPT_RECURSION,
OPT_UNLIMITED,
OPT_VERBOSE,
OPT_DIRECTORIES,
0x00,
};
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
return(flag_b(v,si,di,fl));
}
