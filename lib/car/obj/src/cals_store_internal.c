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

// second half of the default config directory
auto signed char *second_half = ("/.cals/event.csv");
auto signed short crlf = (0x0A0D);
auto signed short lf = (0x0A);

auto struct _stat stats;
auto signed char *path;
auto signed char *p;
auto signed access_right;
auto signed permission;
auto signed i,r;
auto signed short flag;

if(!csv) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);

/* Find the default event file. */
path = (0x00);
p = rf_env("USERPROFILE");
if(!p) return(0x00);
r = cat_b(&path,p,second_half,(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}

// if(CLI_DBG) printf("%s %s\n","Path:",path);
if(CALS_VERBOSE&(R(flag,*argp))) printf("%s %s\n","Path:",path);

if(!flag) {
// check the event file stat.
r = _stat(path,&stats);
if(!(r^(~0x00))) {
if(ENOENT^(errno)) {
printf("%s \n","<< Error at fn. _stat()");
// return(0x00);
flag++;
}}}

if(!flag) {
// open, write and close
access_right = (_O_CREAT|_O_APPEND|_O_BINARY|_O_RDWR);
permission = (_S_IREAD|_S_IWRITE);
r = store_b(lf,access_right,permission,csv,path);
if(!r) {
printf("%s \n","<< Error at fn. store_b()");
// return(0x00);
flag++;
}}

if(path) {
embed(0x00,path);
rl(path);
}
path = (0x00);

if(flag) return(0x00);

return(r);
}
