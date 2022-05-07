/* **** Notes

Run in a subroutine.
*/


# define CAR_H
# include <process.h>
# include "./../../../config.h"

signed(__cdecl commandlet(signed(arg/* stack size */),void(*argp),void(__cdecl*f)(void(*argp)))) {

auto void *hdl;

if(arg<(0x00)) AND(arg,0x00);
if(!f) return(0x00);
// if(!argp) return(0x00);

hdl = (void*) _beginthread(f,arg,argp);

return(0x01);
}
