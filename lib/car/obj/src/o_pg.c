/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl o_pg(signed(arg/* align */),pg_t(*argp))) {
auto signed char *b;
if(!argp) return(0x00);
b = (*(CLIH_BASE+(R(b,*argp))));
return(cli_outs_b(arg,b));
}
