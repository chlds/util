/* **** Notes

Initialise
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_init_codepage(cli_codepage_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

i = (CLI_CODEPAGES);
while(i) *(--i+(R(io,*argp))) = (0x00);

R(optl,*argp) = (0x00);

AND(R(flag,*argp),0x00);
// OR(R(flag,*argp),CLI_INIT);

return(0x01);
}
