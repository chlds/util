/* **** Notes

Initialise

Remarks:
Refer at fn. cli_init_property.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_init_text(cli_text_t(*argp))) {

auto signed i,r;

if(!argp) return(0x00);

AND(R(width,*argp),0x00);
AND(R(height,*argp),0x00);
AND(R(flag,*argp),0x00);
AND(R(attribute,*argp),0x00);

R(optl,*argp) = (0x00);

OR(R(flag,*argp),CLI_INIT);

return(0x01);
}
