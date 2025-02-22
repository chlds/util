# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_di_abbrev_in_ll_on_full_moon(time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed r;
auto signed debug = (DBG);
auto signed idus = (15);
auto signed nonae = (7);
auto signed kalendae = (1);
auto signed char ante[] = ("A");
auto signed char diem[] = ("D");
auto signed char nonas[] = ("NON");
auto signed char idvs[] = ("EID");
auto signed char sp[] = (" ");
auto signed char *mdot = (MDOT);
auto signed char *(a[]) = {
"",
"KAL",
"VI",
"V",
"IV",
"III",
"PRID",
"NON",
"VIII",
"VII",
"VI",
"V",
"IV",
"III",
"PRID",
"EID",
0x00,
};
b = (0x00);
if(!argp) return(b);
r = current_di_b(debug,argp);
if(!(0x01+(r))) return(b);
if(idus<(r)) return(cat_di_abbrev_in_ll_on_new_moon(argp));
r = (r%(ct_v(a)));
if(!r) return(b);
w = (a);
w = (r+(w));
b = (*w);
b = cath(b,(void*)(0x00));
if(EQ(kalendae,r)) return(b);
if(EQ(nonae,r)) return(b);
if(EQ(idus,r)) return(b);
if(r<(nonae)) b = cat_xe(b,cath(sp,mdot,sp,nonas,(void*)(0x00)),(void*)(0x00));
if(EQ(r,nonae+(~0x00))) return(b);
if(r<(nonae)) return(cat_xe(cath(ante,sp,mdot,sp,diem,sp,mdot,sp,(void*)(0x00)),b,(void*)(0x00)));
b = cat_xe(b,cath(sp,mdot,sp,idvs,(void*)(0x00)),(void*)(0x00));
if(EQ(r,idus+(~0x00))) return(b);
b = cat_xe(cath(ante,sp,mdot,sp,diem,sp,mdot,sp,(void*)(0x00)),b,(void*)(0x00));
return(b);
}
