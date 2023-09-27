# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtofmonths_in_ll_te_r(time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed di;
auto signed r;
auto time_t t;
auto time_t day = (24*(60*(60)));
auto signed debug = (DBG);
auto signed char sp[] = (" ");
auto signed char kal[] = ("KALENDAS");
auto signed char *(mon[]) = {
"",
"ANTE DIEM VNDEVICESIMVM",
"ANTE DIEM DVODEVICESIMVM",
"ANTE DIEM SEPTIMVM DECIMVM",
"ANTE DIEM SEXTVM DECIMVM",
"ANTE DIEM QVINTVM DECIMVM",
"ANTE DIEM QVARTVM DECIMVM",
"ANTE DIEM TERTIVM DECIMVM",
"ANTE DIEM DVODECIMVM",
"ANTE DIEM VNDECIMVM",
"ANTE DIEM DECIMVM",
"ANTE DIEM NONVM",
"ANTE DIEM OCTAVVM",
"ANTE DIEM SEPTIMVM",
"ANTE DIEM SEXTVM",
"ANTE DIEM QVINTVM",
"ANTE DIEM QVARTVM",
"ANTE DIEM TERTIVM",
"PRIDIE",
/*
"ante diem undevicesimum",
"ante diem duodevicesimum",
"ante diem septimum decimum",
"ante diem sextum decimum",
"ante diem quintum decimum",
"ante diem quartum decimum",
"ante diem tertium decimum",
"ante diem duodecimum",
"ante diem undecimum",
"ante diem decimum",
"ante diem nonum",
"ante diem octavum",
"ante diem septimum",
"ante diem sextum",
"ante diem quintum",
"ante diem quartum",
"ante diem tertium",
"pridie",
//*/
0x00,
};
if(!argp) return(0x00);
AND(r,0x00);
t = (*argp);
di = current_di_b(debug,&t);
while(0x01) {
t = (day+(t));
r++;
if(!(di<(current_di_b(debug,&t)))) break;
}
w = (mon);
if(!(r<(ct_v(w)))) return(0x00);
r = (0x01+(~r));
r = (r+(ct_v(w)));
b = (*(r+(w)));
b = catt(b,sp,kal,(void*)0x00);
r = current_mo_b(debug,&t);
if(!(0x01+(r))) return(0x00);
b = cat_xe(b,catt(sp,(void*)0x00),cvtxt_month_in_ll(r,di),(void*)0x00);
return(b);
}
