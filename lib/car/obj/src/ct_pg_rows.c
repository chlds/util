/* **** Notes

Count
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ct_pg_rows(signed(colm),pg_t(*argp))) {
auto signed char *b;
if(colm<(0x01)) return(0x00);
if(!argp) return(0x00);
b = (*(CLI_B+(R(b,*argp))));
return(ct_rows(colm,b));
}
