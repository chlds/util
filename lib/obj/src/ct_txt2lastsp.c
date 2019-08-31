/* **** Notes

Count down letters to the last space.

Remarks:
Refer at util/incl/recur.h
Use ALIGN_TAB
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl ct_txt2lastsp(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(*p) = (0x00);
auto signed(l),(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

l = ct(argp);

p = (signed char(*)) malloc(0x01+(l+(sizeof(signed char))));

if(!p) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}

r = cpy(p,argp);

if(!p) {
printf("%s", "<< Error at fn. cpy()");
return(0x00);
}

r = ctdn2lastsp_internal(r,p);
// r = ctdn2lastsp_internal(l,p);

*(-r+(l+(p))) = ('\0');

r = ct_txt(ALIGN_TAB,p);

free(p);
p = (0x00);

return(r);
}
