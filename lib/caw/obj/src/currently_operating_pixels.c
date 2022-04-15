/* **** Notes

Retrieve.

Remarks:
Return the width if arg is (0x00).
Return the height if arg is non (0x00).
*/


# include "./incl/config.h"

signed(__cdecl currently_operating_pixels(signed(arg))) {

auto signed r;

r = (SM_CYSCREEN);
if(!arg) r = (SM_CXSCREEN);

return(GetSystemMetrics(r));
}
