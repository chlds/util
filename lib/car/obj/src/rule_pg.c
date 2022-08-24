/* **** Notes

Rule

Remarks:
Refer at fn. cumul_pg and fn. align_pg
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl rule_pg(signed(dif),signed(arg),pg_t(*argp))) {
auto signed r;
if(dif<(0x00)) return(0x00);
if(arg<(0x00)) return(0x00);
if(!(arg<(OBJS))) return(0x00);
if(!argp) return(0x00);
if(!(align_pg(argp))) return(0x00);
if(!dif) return(OBJS);
if(!arg) return(OBJS);
return(cumul_pg(dif,arg,argp));
}
