/* **** Notes

Inspect the byte order.
*/


# define CAR
# include <stdio.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl insp_b(signed char(*di/* path */),signed char(*si))) {

/* Currently under construction
auto signed *d;
auto signed r;
auto size_t s;
auto fl_t fl;
auto signed(__cdecl*f)(signed(arg),void(*argp));
auto signed(__cdecl*(fn[]))(signed(arg),void(*argp)) = {
insp_b_utf_8,
0x00,
};
auto signed char *(a[])) = {
("utf-8"),
(0x00),
};

if(!di) return(0x00);
if(!si) return(0x00);

AND(s,0x00);
r = already_exist_b(&s,si);
if(!r) return(0x00);
if(!s) return(0x01);

r = ords(a,si);
if(!(r<(ct_vb(a))) return(0x00);

f = (*(r+(fn)));
d = (0x00);
r = cv_ds(&d,s);
if(!r) {
printf("%s \n","<< Error at fn. cv_ds()");
return(0x00);
}

r = parse_b(di,d,f);
// if(!r) printf("%s \n","<< Error at fn. parse_b()");

embed_d(0x02,d);
rl(d);
d = (0x00);

return(r);
//*/
return(0x01);
}
