/* **** Notes

Return the number of spaces that are output when the tab key is pressed.

Remarks:
Refer at fn. align_b.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl align_backward(signed(arg),signed char(*argp))) {

if(arg<(0x00)) return(0x00);
if(!arg) return(0x00);
if(!argp) return(0x00);

if(!(HT^(*(--argp)))) return(0x00);

return(0x01+(align_backward(--arg,argp)));
}
