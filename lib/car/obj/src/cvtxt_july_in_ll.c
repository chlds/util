# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cvtxt_july_in_ll(signed arg/* di */)) {
auto signed char **w;
auto signed char *b;
auto signed r;
auto signed idus = (15);
auto signed nonae = (7);
auto signed kalendae = (1);
auto signed char *(mon[]) = {
"IVLIVS",
"IVLIIS",
"IVLIAS",
/*
"Iulius",
"Iuliis",
"Iulias",
//*/
0x00,
};
if(!(0x00<(arg))) return(0x00);
AND(r,0x00);
b = (0x00);
w = (mon);
r = ct_v(w);
--r;
if(EQ(kalendae,arg)) --r;
if(EQ(nonae,arg)) --r;
if(EQ(idus,arg)) --r;
if(r<(0x00)) return(b);
b = (*(r+(w)));
return(catt(b,(void*)0x00));
}