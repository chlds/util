/* **** Notes

Write

Remarks:
write di,si
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl wr_ds_b(signed char(**argp))) {
auto signed char *b;
auto signed *(a[OBJS]);
auto signed char *perm = ("rdonly,binary");
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (*argp);
*(CLI_B+(a)) = (signed*) (b);
argp++;
if(!argp) return(0x00);
b = (*argp);
*(CLI_W+(a)) = (signed*) (b);
if(!b) return(0x00);
return(xt(perm,b,a,wr_ds_b_r));
}
