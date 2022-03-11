/* **** Notes

Store an event at file event.csv in directory ~/.cals/.

Remarks:
Path: ~/.cals/event.csv
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_store_internal(signed char(*csv),cals_event_t(*argp))) {

auto signed char *b;
auto signed char *path;
auto signed i,r;
auto signed short flag;
auto size_t size;
auto signed char *cals_dir = (".cals/");
auto signed char *default_file = ("event.csv");

if(!csv) return(0x00);
if(!argp) return(0x00);

/* Find the default event file. */
b = rf_env("USERPROFILE");
if(!b) return(0x00);

path = (0x00);
r = cat_b(&path,b,"/",cals_dir,(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}

if(DBG) printf("%s %s \n","Path:",path);
if(!(cf_dir(path))) {
rl(path);
printf("%s \n","Please make sure you have a .cals directory under your home directory.");
return(0x01);
}

r = cat_b(&path,default_file,(void*)0x00);
if(!r) {
rl(path);
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}

if(CALS_VERBOSE&(R(flag,*argp))) printf("%s %s \n","Path:",path);

// check the event file stat.
r = already_b(&size,path);
if(!r) {
if(EQ(size,~0x00)) OR(r,0x01);
else printf("%s \n","<< Error at fn. already_b()");
}

if(r) {
// open, write and close
r = appd_b(LF,path,csv);
if(!r) printf("%s \n","<< Error at fn. appd_b()");
}

if(path) {
embed(0x00,path);
rl(path);
}
path = (0x00);
b = (path);

return(r);
}
