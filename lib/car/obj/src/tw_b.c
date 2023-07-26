/* **** Notes

Debug
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl tw_b(signed(arg),signed char(**argp),signed char(**envp))) {
auto signed r;
if(!argp) return(0x00);
if(!envp) return(0x00);
return(tw_b_r(argp));
}
