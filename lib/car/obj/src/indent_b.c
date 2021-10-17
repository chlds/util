/* **** Notes

Indent.

Remarks:
Return (0x01) on success.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl indent_b(signed short(arg/* align */))) {

auto signed r;

if(arg<(0x00)) return(0x00);
if(!arg) return(0x00);
if(0x08<(arg)) arg = (0x08);

return(cli_indent(cli_reckon(arg)));
}
