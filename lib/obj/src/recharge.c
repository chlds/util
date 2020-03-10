/* **** Notes

Unmap and map.

Remarks:
Along with C library
//*/


# include <stdlib.h>

signed(__cdecl recharge(signed char(**argp),signed(arg))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(arg<(0x01)) return(0x00);

if(*argp) {
embed(0x00/* flag */,*argp);
free(*argp);
}

arg = (arg*(sizeof(signed char)));
*argp = (signed char(*)) malloc(arg);
if(!(*argp)) return(0x00);

return(arg);
}
