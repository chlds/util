# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtofmonths_t_in_ll_r(time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed di;
auto signed r;
auto time_t t;
auto time_t day = (24*(60*(60)));
auto signed debug = (DBG);
auto signed char sp[] = (" ");
auto signed char *(mon[]) = {
"",
"ante diem undevicesimum Kalendas",
"ante diem duodevicesimum Kalendas",
"ante diem septimum decimum Kalendas",
"ante diem sextum decimum Kalendas",
"ante diem quintum decimum Kalendas",
"ante diem quartum decimum Kalendas",
"ante diem tertium decimum Kalendas",
"ante diem duodecimum Kalendas",
"ante diem undecimum Kalendas",
"ante diem decimum Kalendas",
"ante diem nonum Kalendas",
"ante diem octavum Kalendas",
"ante diem septimum Kalendas",
"ante diem sextum Kalendas",
"ante diem quintum Kalendas",
"ante diem quartum Kalendas",
"ante diem tertium Kalendas",
"pridie Kalendas",
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
b = catt(b,(void*)0x00);
r = current_mo_b(debug,&t);
if(!(0x01+(r))) return(0x00);
b = cat_xe(b,catt(sp,(void*)0x00),cvtxt_month_in_ll(r,di),(void*)0x00);
return(b);
}
