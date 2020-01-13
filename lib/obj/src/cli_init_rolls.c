/* **** Notes

Charge buffer.

Remarks:
Along with C library
//*/


# define CLI_MACRO

# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_init_rolls(signed(size),CLI_ROLL(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(size<(0x01)) return(0x00);
if(!argp) return(0x00);

R(size,*argp) = (size);

// charge rolls
i = (CLI_WORKSPACE);
while(i) {
*(--i+(R(base,*argp))) = (signed char(*)) malloc(size*(sizeof(signed char)));
}

// charged rolls
if(CLI_DBG) printf("%s%d%s\n","Charged ",CLI_WORKSPACE," rolls");

return(CLI_WORKSPACE);
}
