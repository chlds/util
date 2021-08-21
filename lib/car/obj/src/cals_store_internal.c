/* **** Notes

Store an event at file event.csv in directory ~/.cals/.

Remarks:
Path: ~/.cals/event.csv
//*/


# define CALEND
# define CAR

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl cals_store_internal(signed char(*csv),cals_event_t(*argp))) {

auto signed char *b;
auto signed char *path;
auto signed access_right;
auto signed permission;
auto signed i,r;
auto signed short flag;
auto struct _stat stats;
auto signed char *cals_dir = (".cals/");
auto signed char *default_file = ("event.csv");
auto signed short crlf = (0x0A0D);
auto signed short lf = (0x0A);

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
r = _stat(path,&stats);
if(!r) OR(r,0x01);
if(!(r^(~0x00))) {
AND(r,0x00);
if(DBG) printf("%s: %s \n","Path",path);
if(ENOENT^(errno)) printf("%s \n","<< Error at fn. _stat()");
else OR(r,0x01);
}

if(r) {
// open, write and close
access_right = (_O_CREAT|_O_APPEND|_O_BINARY|_O_RDWR);
permission = (_S_IREAD|_S_IWRITE);
r = store_b(lf,access_right,permission,csv,path);
if(!r) printf("%s \n","<< Error at fn. store_b()");
}

if(path) {
embed(0x00,path);
rl(path);
}
path = (0x00);
b = (path);

return(r);
}
