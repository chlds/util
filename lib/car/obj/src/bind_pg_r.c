/* **** Notes

Concatenate pages after allocating a memory block for structure pg_t

Remarks:
Refer at fn. unbind_pg
Build a doubly linked list
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl bind_pg_r(pg_t(*di),pg_t(*si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(init_pg(0x00,si))) {
printf("%s \n","<< Error at fn. init_pg()");
return(0x00);
}
r = cat_pg(0x00/* i.e., in a doubly LL */,di,si);
if(!r) printf("%s \n","<< Error at fn. cat_pg()");
return(r);
}
