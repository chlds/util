/* **** Notes

Charge buffer.

Remarks:
Along with C library
//*/


# define CLI_MACRO

# include "../../../incl/config_ty.h"

signed(__cdecl cli_init_roll(signed(size),signed char(**roll),CLI_ROLL(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(size<(0x01)) return(0x00);
if(!roll) return(0x00);
if(!(*roll)) return(0x00);
if(!argp) return(0x00);

R(size,*argp) = (size);

// charge rolls
i = (0x00);
while(*(i+(roll))) {
*(i+(R(base,*argp))) = (*(i+(roll)));
i++;
}
// charged rolls
if(CLI_DBG) printf("%s%d%s\n","Charged ",i," rolls");
*(i+(R(base,*argp))) = (*(i+(roll)));

return(0x01);
}
