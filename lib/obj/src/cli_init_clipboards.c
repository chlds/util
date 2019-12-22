/* **** Notes

Initialise clipboards.

Remarks:
Along with C library
//*/


# define CLI_MACRO

# include "../../../incl/config_ty.h"

signed(__cdecl cli_init_clipboards(CLI_CLIPBOARD(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

R(flag,*argp) = (0x00);
R(clip,*argp) = (0x00);
R(size,*argp) = (0x00);

i = (CLI_CLIPBOARDS);
while(i) {
*(--i+(R(base,*argp))) = (0x00);
}

return(0x01);
}
