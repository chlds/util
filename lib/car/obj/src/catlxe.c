/*

Build a circular or doubly linked list

Remarks:
Call fn. relppg later
Refer at fn. convv and fn. convt
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

pg_t *(__cdecl catlxe(signed short(flag/* CIRC or DBLY */),signed char(**argp))) {
auto signed char **w;
auto pg_t *p;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
w = (argp);
p = catlxe_r(w,flag);
relw(w);
w = (0x00);
argp = (w);
return(p);
}
