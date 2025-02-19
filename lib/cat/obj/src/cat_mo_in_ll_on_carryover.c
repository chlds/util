# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cat_mo_in_ll_on_carryover(signed(args/* di */),signed(argp/* mo */))) {
auto signed r;
auto signed full = (0x02);
auto signed hollow = (0x01);
auto signed idus_on_hollow = (13);
auto signed idus_on_full = (15);
auto signed compatible = (0x00);
auto signed idus[] = {
idus_on_full,
idus_on_hollow,
0x00,
};
if(!(0x00<(args))) return(0x00);
if(argp<(0x00)) return(0x00);
r = (argp);
r = cat_mo_in_ll_on_moon(r);
if(!r) return(r);
r = (compatible+(r));
r = (r%(ct_d(idus)));
r = (*(r+(idus)));
if(!(r<(args))) return(0x00);
return(0x01);
}
