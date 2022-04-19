/* **** Notes

Pin it to your clipboard.
*/


# define DUAL_CONFIG_H
# define PIN_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl agent_pin(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed char *path;
auto signed lim;
auto signed r;
auto signed short flag;
auto signed char *from = ("f");

if(argc<(0x01)) return(0x00);
if(!argv) return(0x00);
// if(!envp) return(0x00);

AND(lim,0x00);
OR(lim,0x02);
v = (argv);
v++;
/*
b = (*v);
if(b) {
cmpr_partially(&r,b,from);
if(!r) {
lim++;
v++;
}}
//*/

if(argc<(lim)) return(pin_help());
/*
if(EQ(0x03,lim)) {
b = (*v);
return(pin_f(b));
}
//*/

b = (0x00);
r = cv_bv(" ",&b,v);
if(!r) {
printf("%s \n","<< Error at fn. cv_bv()");
return(0x00);
}

rm_brs(b);
r = pin_b(b);
embed(0x00,b);
rl(b);
b = (0x00);

return(r);
}
