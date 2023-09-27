# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtofmonths_abbrev_in_ll_te_r(time_t(*argp))) {
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
"a. d. XIX Kal.",
"a. d. XVIII Kal.",
"a. d. XVII Kal.",
"a. d. XVI Kal.",
"a. d. XV Kal.",
"a. d. XIV Kal.",
"a. d. XIII Kal.",
"a. d. XII Kal.",
"a. d. XI Kal.",
"a. d. X Kal.",
"a. d. IX Kal.",
"a. d. VIII Kal.",
"a. d. VII Kal.",
"a. d. VI Kal.",
"a. d. V Kal.",
"a. d. IV Kal.",
"a. d. III Kal.",
"prid. Kal.",
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
b = cat_xe(b,catt(sp,(void*)0x00),cvtxt_mon_in_ll(r,0x01),(void*)0x00);
return(b);
}
