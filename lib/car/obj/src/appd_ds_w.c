/* **** Notes

Append

Remarks:
write di,si
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl appd_ds_w(signed short(**argp))) {
auto signed short *w;
auto signed *(a[OBJS]);
auto signed char *perm = ("rdonly,binary");
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
w = (*argp);
*(CLI_B+(a)) = (signed*) (w);
argp++;
if(!argp) return(0x00);
w = (*argp);
*(CLI_W+(a)) = (signed*) (w);
if(!w) return(0x00);
return(xt_w(perm,w,a,appd_ds_w_r));
}
