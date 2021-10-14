/* **** Notes

Decode bytes starting from (0x00) for a control function.

Remarks:
Refer at fn. decode_keys, cli_i_b and cli_io_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl decode_key_00(signed(*di),signed char(*si))) {

auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);

if(DBG) printf("{%s} ","00h+");

AND(*di,0x00);

return(0x01);
}
