/* **** Notes

Convert argument b "Year,Month Day,Time(,Year,Month Day,Time),Flag,Subject" in CSV into the cals_event_t format.

Remarks:
Currently under construction
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_convert(signed char(*b),cals_event_t(*argp))) {

static signed deci = (0x0A);
static signed hexa = (0x10);
static signed commas = (0x03);
static signed char comma = (',');

auto signed short interrupted_error = (0x02);
auto signed short allocated_memory = (0x01);
auto signed char delim = ('\n');

auto struct tm *tp;
auto signed char *p;
auto time_t t;
auto signed i,r;
auto signed short yr,mo,di,wk;
auto signed short hr,mn,sm;
auto signed short flag;

if(!b) return(0x00);
if(!argp) return(0x00);

/*
AND(flag,0x00);
OR(R(flag,*argp),CALS_INVALID);
//*/

r = cv_ords(0x00/* front */,MONTH_V,&i,b);
if(!r) {
printf("%s \n","<< Error at fn. cv_ords()");
return(0x00);
}

mo = (signed short) (i);
*(CALS_MO+(R(date,*argp))) = (mo);
if(mo<(0x00)) return(0x00);
if(11<(mo)) return(0x00);

r = cv_da_first(deci,&i,b);
if(!r) {
printf("%s \n","<< Error at fn. cv_da_first()");
return(0x00);
}

*(CALS_YR+(R(date,*argp))) = (i);
if(i<(1900)) return(0x00);

b = (r+(b));
r = cv_da_first(deci,&i,b);
if(!r) {
printf("%s \n","<< Error at fn. cv_da_first()");
return(0x00);
}

*(CALS_DI+(R(date,*argp))) = (i);
if(i<(0x01)) return(0x00);
if(31<(i)) return(0x00);

b = (r+(b));
r = cv_da_first(deci,&i,b);
if(!r) {
printf("%s \n","<< Error at fn. cv_da_first()");
return(0x00);
}

*(CALS_HR+(R(time,*argp))) = (i);
if(i<(0x00)) return(0x00);
if(23<(i)) return(0x00);

b = (r+(b));
r = cv_da_first(deci,&i,b);
if(!r) {
printf("%s \n","<< Error at fn. cv_da_first()");
return(0x00);
}

*(CALS_MN+(R(time,*argp))) = (i);
if(i<(0x00)) return(0x00);
if(59<(i)) return(0x00);

b = (r+(b));

r = cv_da_first(hexa,&i,b);
if(!r) {
printf("%s \n","<< Error at fn. cv_da_first()");
return(0x00);
}
R(flag,*argp) = (i);
if(i<(0x00)) return(0x00);
b = (r+(b));
if(!(*b)) return(0x00);
r = ct2(',',b);
b = (r+(b));
if(!(*b)) return(0x00);
b++;
if(!(*b)) return(0x00);

r = cv_da_first(hexa,&i,b);
if(!r) {
printf("%s \n","<< Error at fn. cv_da_first()");
return(0x00);
}
R(periodic,*argp) = (i);
if(i<(0x00)) return(0x00);
b = (r+(b));
if(!(*b)) return(0x00);
r = ct2(',',b);
b = (r+(b));
if(!(*b)) return(0x00);
b++;
if(!(*b)) return(0x00);

r = ct(b);
r++;
r = (r*(sizeof(*b)));
if(r<(0x00)) return(0x00);
p = (signed char(*)) malloc(r);
if(!p) return(0x00);

r = cpy(p,b);
if(!r) {
free(p);
p = (0x00);
printf("%s \n","<< Error at fn. cpy()");
return(0x00);
}

if(R(b,*argp)) {
embed(0x00,R(b,*argp));
free(R(b,*argp));
}
R(b,*argp) = (p);

// also
r = ct(p);
if(0x00<(r)) {
if(!('\n'^(*(--r+(p))))) *(r+(p)) = (0x00);
}
if(0x00<(r)) {
if(!('\r'^(*(--r+(p))))) *(r+(p)) = (0x00);
}

// and
time(&t);
tp = localtime(&t);
if(!tp) return(0x00);

yr = (1900+(R(tm_year,*tp)));
i = (0x08);
while(0x01) {
if(!i) return(0x00);
yr = (-yr+(*(CALS_YR+(R(date,*argp)))));
t = (t+(yr*(52*(7*(24*(60*(60)))))));
tp = localtime(&t);
if(!tp) return(0x00);
yr = (1900+(R(tm_year,*tp)));
if(!(yr^(*(CALS_YR+(R(date,*argp)))))) break;
--i;
}

mo = (R(tm_mon,*tp));
i = (0x08);
while(0x01) {
if(!i) return(0x00);
mo = (-mo+(*(CALS_MO+(R(date,*argp)))));
t = (t+(mo*(3*(7*(24*(60*(60)))))));
tp = localtime(&t);
if(!tp) return(0x00);
mo = (R(tm_mon,*tp));
if(!(mo^(*(CALS_MO+(R(date,*argp)))))) break;
--i;
}

di = (R(tm_mday,*tp));
di = (-di+(*(CALS_DI+(R(date,*argp)))));
t = (t+(di*(24*(60*(60)))));

tp = localtime(&t);
if(!tp) return(0x00);

wk = (R(tm_wday,*tp));
*(CALS_WK+(R(date,*argp))) = (wk);

hr = (R(tm_hour,*tp));
hr = (-hr+(*(CALS_HR+(R(time,*argp)))));
t = (t+(hr*(60*(60))));

tp = localtime(&t);
if(!tp) return(0x00);
mn = (R(tm_min,*tp));
mn = (-mn+(*(CALS_MN+(R(time,*argp)))));
t = (t+(mn*(60)));

/*
tp = localtime(&t);
if(!tp) return(0x00);
sm = (R(tm_sec,*tp));
sm = (-sm+(*(CALS_SM+(R(time,*argp)))));
t = (t+(sm));
//*/

R(t,*argp) = (t);

// verify e.g., Feb. 29
tp = localtime(&t);
if(!tp) return(0x00);
mo = (*(CALS_MO+(R(date,*argp))));
if(mo^(R(tm_mon,*tp))) return(0x00);

/*
flag = (~CALS_INVALID);
AND(R(flag,*argp),flag);
//*/

return(0x01);
}
