/* **** **** Making a small shell

on branch develop
*/


# define CAR
# define C_MT
# include "./../../../incl/config.h"

void *(__cdecl stitch_b(signed(arg/* stack size of threads */),signed char(*cache),void(*argp))) {

auto signed char *b;
auto void *h;
auto signed r;
auto signed short flag;
auto sat_t sat;
auto void(__cdecl*f)(void(*argp));
auto void(__cdecl*(fn[]))(void(*argp)) = {
(void(__cdecl*)(void(*))) (cmdl_exit_b),
(void(__cdecl*)(void(*))) (cmdl_help_b),
(void(__cdecl*)(void(*))) (cmdl_clear_b),
(void(__cdecl*)(void(*))) (cmdl_time_b),
(void(__cdecl*)(void(*))) (cmdl_save_b),
(void(__cdecl*)(void(*))) (cmdl_open_b),
(void(__cdecl*)(void(*))) (cmdl_output_b),
(void(__cdecl*)(void(*))) (cmdl_history_b),
(void(__cdecl*)(void(*))) (0x00),
};
auto signed char *(term[]) = {
(signed char(*)) ("--exit"),
(signed char(*)) ("--help"),
(signed char(*)) ("--clear"),
(signed char(*)) ("--time"),
(signed char(*)) ("--save"),
(char signed(*)) ("--open"),
(char signed(*)) ("--output"),
(char signed(*)) ("--history"),
(signed char(*)) (0x00),
};

if(!cache) return(0x00);
if(!argp) return(0x00);

b = (cache);
r = ords(term,b);
if(!r) return(0x00);
if(!(r<(ct_vb(term)))) return(0x00);
if(arg<(0x00)) AND(arg,0x00);
/* stack size of threads */

// run in a sub-routine
f = (*(r+(fn)));
h = knit_b(arg,argp,f);
if(!h) printf("%s \n","<< Error at fn. knit_b()");
// e.g., unmap the rest..

return(h);
}
