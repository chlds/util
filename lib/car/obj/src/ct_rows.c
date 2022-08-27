/* **** Notes

Count

Remarks:
Refer at fn. ct_pg_rows
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ct_rows(signed(colm),signed char(*argp))) {
auto signed r;
if(colm<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = ct_rows_r(colm,argp);
if(!r) return(0x00);
argp = (r+(argp));
return(0x01+(ct_rows(colm,argp)));
}
