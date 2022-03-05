/* **** Notes

Store clipboard text.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl depin_store_r(signed short(arg),signed char(*di),signed char(*si))) {

auto signed char **v;
auto signed char *b;
auto signed short *w;
auto signed r;
auto signed short flag;
auto signed char *(perm[]) = {
("creat,append,rdwr,binary,iread,iwrite,"),
("creat,excl,rdwr,binary,iread,iwrite,"),
(0x00),
};

if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

--arg;
v = (perm);
r = ct_v(v);
if(!(arg<(r))) return(0x00);

b = (*(arg+(perm)));
w = (0x00);
r = decode_wb(&w,di);
if(!r) return(0x00);

r = str_w(0x00,b,w,si);
embed_w_l(0x00,w);
rl(w);
w = (0x00);

return(r);
}
