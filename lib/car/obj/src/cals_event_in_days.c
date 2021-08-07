/* **** Notes

Confirm.

Remarks:
Refer at fn. cals_check_for_periodic_events and at fn. cals_periodic_event_in_the_day.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_event_in_days(signed char(*content),cals_event_t(*argp))) {

auto signed ad_h = (2100);
auto signed ad_l = (1970);
auto signed char *b;
auto signed char *p;
auto struct tm *tp;
auto time_t t;
auto signed i,l,r;
auto signed short wk,di,mo,yr;
auto signed short day;
auto signed short flag;
auto signed deci = (0x0A);
auto signed short ordinary_flag[] = {
CALS_THEFIRST,
CALS_THESECOND,
CALS_THETHIRD,
CALS_THEFOURTH,
CALS_THELAST,
0x00,
};
auto signed char *(ordinary[]) = {
"first",
"second",
"third",
"fourth",
"last",
0x00,
};

if(!content) return(0x00);
if(!argp) return(0x00);

// temporarily disable
return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

r = cals_reset_event(content,argp);
if(!r) return(0x00);

AND(flag,0x00);
b = (content);
r = cv_ord(0x01/* from behind */,ordinary,&i,b);
b = (r+(b));
if(!(*b)) return(0x00);
if(DBG) {
printf("[");
r = cli_outs(b);
printf("] \n");
}
if(!(i<(0x00))) {
flag = (*(ordinary_flag+(i)));
// OR(R(flag,*argp),CALS_PERIODIC);
OR(R(periodic,*argp),flag);
}

l = (r);
if(!flag) return(0x00);

r = cv_ord(0x01/* from behind */,DAYOFTHEWK,&i,b);
b = (r+(b));
if(!(*b)) return(0x00);
if(DBG) {
printf("[");
r = cli_outs(b);
printf("] \n");
}
if(!(i<(0x00))) {
*(CALS_WK+(R(date,*argp))) = (signed short) (i);
OR(R(flag,*argp),CALS_IN_DAYS);
}

if(!(CALS_IN_DAYS&(R(flag,*argp)))) return(0x00);

if(l) {
p = (R(b,*argp));
if(p) rl(p);
r = (l);
r++;
p = (signed char(*)) alloc(r);
R(b,*argp) = (p);
if(!p) return(0x00);
ncpy(p,content,l);
rm_trailing_blanks(p);
p = (0x00);
}

r = cmpr_part(&i,b,"month");
if(!i) {
OR(R(flag,*argp),CALS_PERIODIC);
OR(R(periodic,*argp),CALS_MONTHLY);
return(0x02);
}

r = cv_ord(0x01/* from behind */,MON,&i,b);
b = (r+(b));
if(!(*b)) return(0x00);
if(DBG) {
printf("[");
r = cli_outs(b);
printf("] \n");
}
if(!(i<(0x00))) {
*(CALS_MO+(R(date,*argp))) = (signed short) (i);
r = cv_da_first(deci,&i,b);
if(r) {
if(!(i<(ad_h))) i = (ad_h);
if(!(i<(ad_l))) *(CALS_YR+(R(date,*argp))) = (i);
}}

b = (l+(content));
r = cv_time(b,argp);
// if(!r) return(0x00);

flag = (~CALS_TIME_ALLDAY);
if(!r) OR(R(flag,*argp),CALS_TIME_ALLDAY);
else AND(R(flag,*argp),flag);

r = cals_modify_time_of_events_in_days(argp);
if(!r) return(0x00);

time(&t);
r = cals_event_in_the_day(t,argp);

flag = (~CALS_DATE_TODAY);
if(!r) AND(R(flag,*argp),flag);
else OR(R(flag,*argp),CALS_DATE_TODAY);

return(0x01);
}
