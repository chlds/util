/* **** Notes

Jot down.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_jd(void(*argp))) {

auto signed char **v;
auto signed char *b;
auto signed char *path;
auto fl_t *fl;
auto signed i,r;
auto signed short flag;
auto signed local = (0x01);

if(!argp) return(0x00);

fl = (argp);
r = (*(CLI_BASE+(R(fd,*fl))));
// if(r<(0x02)) {
if(r<(0x03)) {
printf("  %s \n","Jot down.");
printf("\n");
printf("  %s \n","Syntax:");
printf("  %s \n","jd <FILE> ..");
/*
printf("  %s \n","jd ..");
printf("\n");
printf("  %s \n","Remarks:");
printf("  %s \n","The PATH can be omitted by writing \"eq path, PATH\" in path ~/.jd/config.txt, e.g.,");
printf("  %s \n","eq path, ./log.txt");
//*/
return(0x01);
}

v = (signed char(**)) (*(CLI_BASE+(R(v,*fl))));
if(!v) return(0x00);

v++;
path = (*v);
v++;

return(cli_log_v(local,path,v));
}
