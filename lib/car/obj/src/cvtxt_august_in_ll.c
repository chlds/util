# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cvtxt_august_in_ll(signed(args/* carry over */),signed(argp/* di */))) {
auto signed char **w;
auto signed char *b;
auto signed r;
auto signed idus = (13);
auto signed nonae = (5);
auto signed kalendae = (1);
auto signed char *(mon[]) = {
"AVGVSTVS",
"AVGVSTIS",
"AVGVSTAS",
/*
"Augustus",
"Augustis",
"Augustas",
//*/
0x00,
};
if(!(0x00<(argp))) return(0x00);
AND(r,0x00);
b = (0x00);
w = (mon);
r = ct_v(w);
if(!args) {
if(EQ(kalendae,argp)) --r;
if(EQ(nonae,argp)) --r;
if(EQ(idus,argp)) --r;
}
if(--r<(0x00)) return(b);
b = (*(r+(w)));
return(cath(b,(void*)(0x00)));
}
