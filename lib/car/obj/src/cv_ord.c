/* **** Notes

Check the ordinal number.
//*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_ord(signed(arg),signed char(**table),signed char(*argp))) {

auto signed i,r;
auto signed(__cdecl*f)(signed char(**d),signed char(*s));
auto signed(__cdecl*(fn[]))(signed char(**d),signed char(*s)) = {
cv_ord_f,
cv_ord_l,
0x00,
};

if(!table) return(0x00);
if(!argp) return(0x00);

if(arg) arg = (0x01);

f = (*(arg+(fn)));

return(f(table,argp));
}
