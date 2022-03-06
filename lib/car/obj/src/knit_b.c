/* **** Notes

Create a thread.

Remarks:
You can call fn. _endthread explicitly to terminate a thread, however,
_endthread is automatically called when the thread returns from the routine that's passed as a parameter.
Return a handle to the newly created thread,
or (0x00) on failure.
*/


# define CAR
# include <process.h>
# include "./../../../incl/config.h"

void *(__cdecl knit_b(signed(arg/* size */),void(*argp),void(__cdecl*f)(void(*argp)))) {

auto signed char *b;
auto void *v;
auto void *e;

if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!f) return(0x00);

b = (0x00);
--b;
e = (void*) (b);
v = (void*) _beginthread(f,arg,argp);
if(EQ(e,v)) return(0x00);

return(v);
}
