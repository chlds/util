# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl bindpg_r(signed short(flag),pg_t(*di),pg_t(*si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(initpg(0x00,si))) {
printf("%s \n","<< Error at fn. initpg()");
return(0x00);
}
r = catpg(flag/* in a circular or doubly linked list */,di,si);
if(!r) printf("%s \n","<< Error at fn. catpg()");
return(r);
}
