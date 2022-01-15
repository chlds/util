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
auto signed lim;
auto signed i,r;
auto signed short flag;
auto signed char *hyphen = ("-");
auto signed local = (0x01);

if(!argp) return(0x00);

fl = (argp);
v = (signed char(**)) (*(CLI_BASE+(R(v,*fl))));
if(!v) return(0x00);

lim = (0x03);
v++;
b = (*v);
if(b) {
r = cmpr_partially(&i,b,hyphen);
if(!i) lim++;
}

r = (*(CLI_BASE+(R(fd,*fl))));
if(r<(lim)) {
printf("  %s \n","Jot down.");
printf("\n");
printf("  %s \n","Syntax:");
printf("  %s \n","jd [flag] <FILE> ..");
printf("\n");
printf("  %s \n","Example:");
printf("  %s \n","jd - ./cba.txt Hi there!");
printf("  %s \n","jd abc.txt Hi there!");
printf("\n");
printf("  %s \n","GitHub: github.com/chlds/util/");
/*
printf("  %s \n","jd ..");
printf("\n");
printf("  %s \n","Remarks:");
printf("  %s \n","The PATH can be omitted by writing \"eq path, PATH\" in path ~/.jd/config.txt, e.g.,");
printf("  %s \n","eq path, ./log.txt");
//*/
return(0x01);
}

if(EQ(0x04,lim)) v++;

path = (*v);
v++;
if(EQ(0x04,lim)) return(jd_b(LF,path,v));

return(cli_log_v(local,path,v));
}
