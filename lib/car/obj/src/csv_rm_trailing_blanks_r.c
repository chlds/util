/* **** Notes

Remove trailing blanks.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl csv_rm_trailing_blanks_r(signed(arg),signed char(*argp))) {

auto signed char comma = (',');

if(!arg) return(0x00);
if(!argp) return(0x00);

if(SP^(*(--argp))) {
if(comma^(*argp)) return(0x00);
}

*argp = (0x00);

return(0x01+(csv_rm_trailing_blanks_r(--arg,argp)));
}
