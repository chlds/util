# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_di_in_ll_on_hollow_moon(time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed r;
auto signed debug = (DBG);
auto signed idus = (13);
auto signed nonae = (5);
auto signed kalendae = (1);
auto signed char ante[] = ("ANTE");
auto signed char diem[] = ("DIEM");
auto signed char nonas[] = ("NONAS");
auto signed char idvs[] = ("IDVS");
auto signed char sp[] = (" ");
auto signed char *mdot = (MDOT);
auto signed char *(a[]) = {
"",
"KALENDIS",
"QVARTVM",
"TERTIVM",
"PRIDIE",
"NONIS",
"OCTAVVM",
"SEPTIMVM",
"SEXTVM",
"QVINTVM",
"QVARTVM",
"TERTIVM",
"PRIDIE",
"IDIBVS",
0x00,
};
b = (0x00);
if(!argp) return(b);
r = current_di_b(debug,argp);
if(!(0x01+(r))) return(b);
if(idus<(r)) return(cat_di_in_ll_on_new_moon(argp));
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
