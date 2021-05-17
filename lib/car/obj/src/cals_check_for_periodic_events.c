/* **** Notes

Check for periodic events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_check_for_periodic_events(signed char(*content),cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *(second[]) = {
("year"),("month"),("week"),("day"),0x00,
};

auto signed periodic[] = {
CALS_ANNUAL,CALS_MONTHLY,CALS_WEEKLY,CALS_DAILY,0x00,
};

auto signed char *first = ("every ");
auto signed char *b;
auto signed i,l,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!content) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

b = (content);
r = cmpr_part(&i,b,first);

if(!i) {
b = (r+(b));
b = (b+(ct(first)));
if(!(*b)) return(0x00);
l = (0x00);
while(*(second+(l))) {
r = cmpr_partially(&i,b,*(second+(l)));
if(!i) {
flag = (*(periodic+(l)));
OR(R(flag,*argp),CALS_PERIODIC);
OR(R(periodic,*argp),flag);
break;
}
l++;
}}

return(0x01);
}
