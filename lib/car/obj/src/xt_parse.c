/*

Along with C library

Remarks:
Refer at util/lib/car/obj/src/xt.c
*/


# define CAR
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl xt_parse(signed(*permission),signed(*access),signed char(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!permission) return(0x00);
if(!access) return(0x00);
if(!argp) return(0x00);

r = xt_parse_access(access,argp);
if(!r) return(0x00);

r = xt_parse_permission(permission,access,argp);
if(!r) return(0x00);

return(0x01);
}
