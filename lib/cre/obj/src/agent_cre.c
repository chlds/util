/* **** Notes

Create.
*/


# define DUAL_CONFIG_H
# define CRE_H
# define STDIO_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl agent_cre(signed(argc),signed char(**argv),signed char(**envp))) {

auto void *argp;
auto signed char *b;
auto signed short *w;
auto signed r;
auto signed(__cdecl*f)(signed(arg),void(*argp));
auto signed limit = (0x02);
auto signed char *param = ("rw");

if(argc<(limit)) return(cre_help());

AND(r,0x00);
b = (*(argv+(argc+(~r))));
w = (0x00);
if(!(cv_wb(&w,b))) return(0x00);
// argp = (0x00);
// f = (0x00);
// r = cre_b(param,b);
r = cre_w(param,w);
if(!r) printf("%s \n","<< Error at fn. cre_w()");
if(!(unmap_w(&w))) {
printf("%s \n","<< Error at fn. unmap_w()");
return(0x00);
}

return(r);
}
