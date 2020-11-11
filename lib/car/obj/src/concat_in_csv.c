/* **** Notes

Concatenate in CSV.

[DATE],[YEAR],[TIME](,[DATE],[YEAR],[TIME]),[FLAG],[SUBJECT]

Remarks:
Release a memory block at the *b.
Refer at fn. cals_store.
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl concat_in_csv(signed char(**b),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
enum {
DI,YR,HR,MN,TOTAL,
};

auto signed char *p[TOTAL];
auto signed short integr[] = {
*(CALS_DI+(R(date,*argp))),*(CALS_YR+(R(date,*argp))),*(CALS_HR+(R(time,*argp))),*(CALS_MN+(R(time,*argp))),0x00,
};

auto signed char *colon = (":");
auto signed char *comma = (",");
auto signed char *space = (" ");
auto signed surplus = (0x80);

auto signed char *csv;
auto signed char *subj;
auto signed char *fl;
auto signed i,l,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!b) return(0x00);
if(!argp) return(0x00);

subj = (R(b,*argp));
r = ct(subj);
if(!r) return(0x00);

r++;
r = (surplus+(r));
r = (r*(sizeof(**b)));
l = (r);
csv = (signed char(*)) malloc(r);
if(!csv) return(0x00);

// map
r = cv_d(0x10/* in hexa-decimal */,&fl,R(flag,*argp));
if(!r) {
printf("%s \n","<< Error at fn. cv_d()");
return(0x00);
}

i = (TOTAL);
while(i) {
--i;
r = cv_d(0x0A,i+(p),*(i+(integr)));
if(!r) {
printf("%s \n","<< Error at fn. cv_d()");
return(0x00);
}}

r = concats(csv,*(MONTH+(*(CALS_MO+(R(date,*argp))))),space,*(DI+(p)),comma,*(YR+(p)),comma,*(HR+(p)),colon,*(MN+(p)),comma,fl,comma,subj,(void*) 0x00);
if(!r) {
printf("%s \n","<< Error at fn. concat_in_csv()");
}

// unmap
i = (TOTAL);
while(i) {
free(*(--i+(p)));
*(i+(p)) = (0x00);
}

if(fl) free(fl);
fl = (0x00);

*b = (csv);
csv = (0x00);

return(l);
}
