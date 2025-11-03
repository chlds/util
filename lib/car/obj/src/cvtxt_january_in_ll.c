# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cvtxt_january_in_ll(signed(args/* carry over */),signed(argp/* di */))) {
auto signed r;
auto signed idus = (13);
auto signed nonae = (5);
auto signed kalendae = (1);
auto signed char *(e[]) = {
"IANVARIVS",
"IANVARIIS",
"IANVARIAS",
/*
"Ianuarius",
"Ianuariis",
"Ianuarias",
//*/
0x00,
};
if(!(0x00<(argp))) return(0x00);
AND(r,0x00);
r = ct_v(e);
if(!args) {
if(EQ(kalendae,argp)) --r;
if(EQ(nonae,argp)) --r;
if(EQ(idus,argp)) --r;
}
if(--r<(0x00)) return(0x00);
return(cathy(*(r+(e))));
}
