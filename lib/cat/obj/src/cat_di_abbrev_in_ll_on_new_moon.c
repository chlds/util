# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_di_abbrev_in_ll_on_new_moon(time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed r;
auto signed debug = (DBG);
auto signed tertivm_decimvm = (13+(~0x00)); // 12th
auto signed septimvm_decimvm = (17+(~0x00)); // 16th
auto signed char ante[] = ("A");
auto signed char diem[] = ("D");
// auto signed char decimvm[] = ("DECIMVM");
auto signed char kalendas[] = ("KAL");
auto signed char sp[] = (" ");
auto signed char mdot[] = {
0xC2,0xB7,0x00,
};
auto signed char *(a[]) = {
"",
"XIX",
"XVIII",
"XVII",
"XVI",
"XV",
"XIV",
"XIII",
"XII",
"XI",
"X",
"IX",
"VIII",
"VII",
"VI",
"V",
"IV",
"III",
"PRID",
0x00,
};
b = (0x00);
if(!argp) return(b);
r = current_di_b(debug,argp);
if(!(0x01+(r))) return(b);
r = cat_di_in_ll_on_new_moon_r(r,argp);
if(!r) return(b);
b = cath(kalendas,(void*)(0x00));
w = (a);
w = (w+(ct_v(w)));
--w;
if(EQ(0x01,r)) return(cat_xe(cath(*w,sp,mdot,sp,(void*)(0x00)),b,(void*)(0x00)));
/*
if(!(r<(tertivm_decimvm))) {
if(!(septimvm_decimvm<(r))) b = cat_xe(cath(decimvm,sp,mdot,sp,(void*)(0x00)),b,(void*)(0x00));
}
//*/
w = (a);
r = (0x01+(~r));
r = (r+(ct_v(w)));
if(!(0x00<(r))) return(b);
r = (r%(ct_v(w)));
w = (r+(w));
b = cat_xe(cath(ante,sp,mdot,sp,diem,sp,mdot,sp,*w,sp,mdot,sp,(void*)(0x00)),b,(void*)(0x00));
return(b);
}
