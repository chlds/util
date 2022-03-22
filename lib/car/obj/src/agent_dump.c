/* **** Notes

Dump a file in the binary

Implemented with a flag to be added for code to run as far as possible to the end
*/


# define CLI_ASCII
# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_dump(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short quickflag;
auto signed line;
auto signed total;
auto fl_t fl;
auto signed lim = (0x02);

if(argc<(lim)) return(dump_help());
if(!(init_fl(0x00,&fl))) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

v = (0x00);
XOR(quickflag,quickflag);
if(lim<(argc)) quickflag++;
if(0x03<(argc)) v = (signed char(**)) (cli_ascii);

b = (*(argv+(argc+(~0x00))));
*(CLI_BASE+(R(fd,fl))) = (quickflag);
*(CLI_OFFSET+(R(v,fl))) = (void*) (v);
*(CLI_BASE+(R(v,fl))) = (void*) (b);

r = agent_dump_r(&fl);
if(!r) printf("%s \n","<< Error at fn. agent_dump_r()");

printf("\n");
line = (*(CLI_INDEX+(R(fd,fl))));
total = (*(CLI_LEAD+(R(fd,fl))));
printf("%d %s \n",line,"lines");
printf("%s %d %s \n","Total:",total,"bytes");

if(!(init_fl(0x00,&fl))) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

return(r);
}
