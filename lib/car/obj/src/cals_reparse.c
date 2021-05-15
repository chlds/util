/* **** Notes

Convert an event into a CSV.

[DATE],[YEAR],[TIME](,[DATE],[YEAR],[TIME]),[FLAG],[PERIODIC],[SUBJECT]

Remarks:
Release a memory block at the *b.
Refer at fn. cals_store.
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_reparse(signed char(**b),cals_event_t(*argp))) {

enum {
DI,YR,HR,MN,TOTAL,
};

auto signed char *(p[TOTAL]);
auto signed short integr[] = {
*(CALS_DI+(R(date,*argp))),*(CALS_YR+(R(date,*argp))),*(CALS_HR+(R(time,*argp))),*(CALS_MN+(R(time,*argp))),0x00,
};

auto signed char *colon = (":");
auto signed char *comma = (",");
auto signed char *space = (" ");

auto signed char *csv;
auto signed char *subj;
auto signed char *fl;
auto signed char *peri;
auto signed i,l,r;
auto signed short flag;

if(!b) return(0x00);
if(*b) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);
subj = (R(b,*argp));

// map
peri = (0x00);
r = cv_d(0x10/* in hexa-decimal */,&peri,R(periodic,*argp));
if(!r) {
printf("%s \n","<< Error at fn. cv_d()");
OR(flag,0x01);
}

fl = (0x00);
r = cv_d(0x10/* in hexa-decimal */,&fl,R(flag,*argp));
if(!r) {
printf("%s \n","<< Error at fn. cv_d()");
OR(flag,0x01);
}

i = (TOTAL);
while(i) *(p+(--i)) = (0x00);
i = (TOTAL);
while(i) {
--i;
r = cv_d(0x0A,p+(i),*(integr+(i)));
if(!r) {
printf("%s \n","<< Error at fn. cv_d()");
OR(flag,0x01);
}}

csv = (0x00);
if(!flag) {
r = cat_b(&csv,*(YR+(p)),comma,*(MONTH+(*(CALS_MO+(R(date,*argp))))),space,*(DI+(p)),comma,*(HR+(p)),colon,*(MN+(p)),comma,fl,"h",comma,peri,"h",comma,subj,(void*) 0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
OR(flag,0x01);
}}

// unmap
i = (TOTAL);
while(i) {
if(*(p+(--i))) rl(*(p+(i)));
*(p+(i)) = (0x00);
}

if(fl) rl(fl);
fl = (0x00);

if(peri) rl(peri);
peri = (0x00);

if(flag) {
if(csv) rl(csv);
csv = (0x00);
}

*b = (csv);
csv = (0x00);

if(flag) return(0x00);

return(r);
}
