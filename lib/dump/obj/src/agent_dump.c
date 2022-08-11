/* **** Notes

Dump a file in the binary

Implemented with a flag to be added for code to run as far as possible to the end
*/


# define DUMP_H
# define CAR_H
# define STDIO_H
# define ASCII_H
# include "./../../../config.h"

signed(__cdecl agent_dump(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short quickflag;
auto signed line;
auto signed total;
auto flh_t fl;
auto signed lim = (0x02);

if(argc<(lim)) return(dump_help());
if(!(init_flh(0x00,&fl))) {
printf("%s \n","<< Error at fn. init_flh()");
return(0x00);
}

v = (0x00);
XOR(quickflag,quickflag);
if(lim<(argc)) quickflag++;
if(0x03<(argc)) v = (signed char(**)) (cli_ascii);

b = (*(argv+(argc+(~0x00))));
*(CLIH_BASE+(R(fd,fl))) = (quickflag);
*(CLIH_OFFSET+(R(v,fl))) = (void*) (v);
*(CLIH_BASE+(R(v,fl))) = (void*) (b);

r = agent_dump_r(&fl);
if(!r) printf("%s \n","<< Error at fn. agent_dump_r()");

printf("\n");
line = (*(CLIH_INDEX+(R(fd,fl))));
total = (*(CLIH_DIFF+(R(fd,fl))));
printf("%d %s \n",line,"lines");
printf("%s %d %s \n","Total:",total,"bytes");

if(!(init_flh(0x00,&fl))) {
printf("%s \n","<< Error at fn. init_flh()");
return(0x00);
}

return(r);
}
