/* **** Notes

Flag.
*/


# define CALEND
# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cals_flag(signed char(**argv),cals_t(*argp))) {

auto signed(__cdecl*f)(cals_t(*argp));
auto signed(__cdecl*(fn[]))(cals_t(*argp)) = {
(signed(__cdecl*)(cals_t(*))) (cals_flag_e),
(signed(__cdecl*)(cals_t(*))) (cals_flag_h),
(signed(__cdecl*)(cals_t(*))) (cals_flag_m),
(signed(__cdecl*)(cals_t(*))) (cals_flag_n),
(signed(__cdecl*)(cals_t(*))) (cals_flag_v),
(signed(__cdecl*)(cals_t(*))) (0x00),
};

auto signed char *(fl[]) = {
"e","h","m","n","v",0x00,
};

auto signed char **v;
auto signed short *w;
auto signed char *b;
auto signed i,l,n,r;
auto signed short flag;

if(!argv) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);
v = (argv);
r = ct_p(v);
if(!r) return(0x00);

if(0x01<(r)) {
l = ct_f(fn);
while(l) {
r = cmpr_part(&i,*(0x01+(v)),*(--l+(fl)));
if(!r) return(0x00);
if(!i) {
f = (*(l+(fn)));
r = f(argp);
if(!r) {
printf("%s (*(%d+(%s)))() \n","<< Error at fn.",l,"fn");
return(0x00);
}}}}

return(0x01);
}
