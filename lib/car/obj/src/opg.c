/*

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl opg(pg_t *argp)) {
auto signed char *b;
if(!argp) return(0x00);
if(cfmppg(argp)) return(0x00);
b = (*(CLIH_BASE+(R(b,*argp))));
return(wrtxt(b,ctt(b)));
}
