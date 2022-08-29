/*

Press <Ctrl-J> to invoke the function

Remarks:
Refer at fn. ctrl_fn_key
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_lf_b(void(*argp))) {
auto signed char **v;
auto signed r;
if(!argp) return(0x00);
co_br(0x01);
v = (signed char(**)) (argp);
if(!(init_va(0x01,OBJS,v))) return(0x00);
return(0x01);
}
