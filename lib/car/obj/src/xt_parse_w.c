/*

Along with C library
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl xt_parse_w(signed(*permission),signed(*access),signed char(*argp))) {
if(!permission) return(0x00);
if(!access) return(0x00);
if(!argp) return(0x00);
if(!(xt_parse_access_w(access,argp))) return(0x00);
if(!(xt_parse_permission_w(permission,access,argp))) return(0x00);
return(0x01);
}
