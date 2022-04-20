/* **** Notes

Commandlet

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define DUAL_CONFIG_H
# define SAT_H
# define MT_H
# define STDIO_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

void*(__cdecl cmdl_fn(signed(arg),unsigned(*tid),void(*argp),unsigned(__stdcall**ff)(void(*argp)))) {

auto signed char *b;
auto void *v;
auto SAT *sat;
auto signed r;
auto unsigned(__stdcall*f)(void(*argp));
auto unsigned createdflags = (0x00);
auto unsigned stacksize = (0x00);

if(!tid) return(0x00);
if(!argp) return(0x00);
if(!ff) return(0x00);
if(!(*ff)) return(0x00);

sat = (SAT*) (argp);
r = ct_f(ff);
if(!(arg<(r))) return(0x00);

// run in a sub-routine
f = (*(arg+(ff)));
v = (void*) _beginthreadex(0x00,stacksize,f,sat/* e.g., *(i+(argp)) */,createdflags,tid);

return(v);
}
