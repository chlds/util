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
auto signed char kal[] = ("KAL.");
auto signed char *(mon[]) = {
"",
"A. D. XIX",
"A. D. XVIII",
"A. D. XVII",
"A. D. XVI",
"A. D. XV",
"A. D. XIV",
"A. D. XIII",
"A. D. XII",
"A. D. XI",
"A. D. X",
"A. D. IX",
"A. D. VIII",
"A. D. VII",
"A. D. VI",
"A. D. V",
"A. D. IV",
"A. D. III",
"PRID.",
/*
"a. d. XIX",
"a. d. XVIII",
"a. d. XVII",
"a. d. XVI",
"a. d. XV",
"a. d. XIV",
"a. d. XIII",
"a. d. XII",
"a. d. XI",
"a. d. X",
"a. d. IX",
"a. d. VIII",
"a. d. VII",
"a. d. VI",
"a. d. V",
"a. d. IV",
"a. d. III",
"prid.",
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
b = cat_xe(b,catt(sp,(void*)0x00),cvtxt_mon_in_ll(r,0x00),(void*)0x00);
return(b);
}
