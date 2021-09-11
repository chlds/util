/*

Along with C library

Remarks:
Refer at util/lib/obj/src/cli_parse.c
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_eq_internal(signed short(term),signed(fd),CLI_TYPEWRITER(*argp))) {

auto signed char *cur,*p;
auto signed i,l,r;
auto signed short flag;
auto signed short cr;
auto signed char c;
auto signed LIMIT = (0x100);
auto signed(__cdecl*f)(void(*argp));
static signed(__cdecl*(fn[]))(void(*argp)) = {
(signed(__cdecl*)(void(*))) (cli_eq_frame),
(signed(__cdecl*)(void(*))) (cli_eq_display),
(signed(__cdecl*)(void(*))) (cli_eq_eor),
(signed(__cdecl*)(void(*))) (cli_eq_load),
(signed(__cdecl*)(void(*))) (cli_eq_monitor),
(signed(__cdecl*)(void(*))) (cli_eq_wrap),
(signed(__cdecl*)(void(*))) (cli_eq_tab),
(signed(__cdecl*)(void(*))) (cli_eq_eol),
(signed(__cdecl*)(void(*))) (0x00),
};
static signed char(*(eq[])) = {
(signed char(*)) ("eq frame,"),
(signed char(*)) ("eq display,"),
(signed char(*)) ("eq eor,"),
(signed char(*)) ("eq load,"),
(signed char(*)) ("eq monitor,"),
(signed char(*)) ("eq wrap,"),
(signed char(*)) ("eq tab,"),
(signed char(*)) ("eq eol,"),
(signed char(*)) (0x00),
};

if(term) return(0x00);
if(!argp) return(0x00);

AND(cr,0x00);
AND(i,0x00);
p = (*(CLI_OFFSET+(R(base,R(roll,*argp)))));
while(0x01) {
if(LIMIT<(i)) {
printf("%s \n","Oops..");
return(0x00);
}
r = rd_b(fd,&c,sizeof(c));
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. rd_b()");
return(0x00);
}
*p = (c);
if(!r) {
term = (0x01);
*p = (0x00);
break;
}
if(!(c^(LF))) {
*p = (0x00);
if(cr) *(--p) = (0x00);
break;
}
if(!(c^(CR))) cr = (0x01);
else cr = (0x00);
p++;
i++;
}

p = (*(CLI_OFFSET+(R(base,R(roll,*argp)))));
AND(i,0x00);

while(*(i+(eq))) {
r = cmpr_partially(&l,p,*(i+(eq)));
if(!l) {
f = (*(i+(fn)));
r = f(argp);
if(!r) {
printf("%s%d%s \n","<< Error at fn. (*(",i,"+(fn)))()");
return(0x00);
}}
i++;
}

return(0x01+(cli_eq_internal(term,fd,argp)));
}
