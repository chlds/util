/* **** Notes

Refer
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_events(signed short(flag),cals_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;

auto cals_roll_t roll;
auto time_t t;
auto signed i,r;
auto signed short mo,di,yr;
auto signed short wk;
auto signed short hr,mn;
auto signed short day;

if(!argp) return(0x00);

r = cals_init_roll(&roll);
if(!r) {
printf("%s \n","<< Error at fn. cals_init_roll()");
return(0x00);
}

// for today
ev = (&(R(today,*argp)));
r = cals_refer_events_internal(flag,ev,argp);
// if(!r) return(0x00);
if(r) {
r = cals_cache_events(ev,&roll);
if(!r) {
printf("%s \n","<< Error at fn. cals_cache_events()");
return(0x00);
}}

// for events
r = cals_refer_events_r(flag,&roll,argp);
if(DBG) printf("[%s: %d] ","r",r);

r = cals_sort_events(&roll);
if(DBG) printf("[%s %d] ","Sorted",r);
if(!r) {
/*
printf("%s \n","<< Error at fn. cals_sort_events()");
return(0x00);
//*/
}

/*
r = cli_replace_text_attributes_beta(0x0F,&(R(property,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_replace_text_attributes_beta()");
// return(0x00);
}
//*/

r = cals_display_events(&roll);
if(!r) {
/*
printf("%s \n","<< Error at fn. cals_display_events()");
return(0x00);
//*/
}

/*
r = cli_restore_text_attributes_beta(&(R(property,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_restore_text_attributes_beta()");
// return(0x00);
}
//*/

r = cals_remove_cached_events(&roll);
if(!r) {
/*
printf("%s \n","<< Error at fn. cals_remove_cached_events()");
return(0x00);
//*/
}

return(0x01);
}
