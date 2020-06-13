/*

Along with C library

Remarks:
Refer at util/lib/obj/src/cli_parse.c
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_eq_internal(signed short(term),signed(fd),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
static signed(__cdecl*(fn[])) (void(*argp)) = {
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

auto signed char CR = ('\r');
auto signed char LF = ('\n');
auto signed LIMIT = (0x100);

auto signed char *cur,*p;
auto signed i,l,r;
auto signed short flag;
auto signed short cr;
auto signed char c;

/* **** CODE/TEXT */
if(term) return(0x00);
if(!argp) return(0x00);

cr = (0x00);
p = (*(CLI_OFFSET+(R(base,R(roll,*argp)))));
i = (0x00);

while(0x01) {
if(LIMIT<(i)) {
printf("%s\n","Oops.. ");
return(0x00);
}
r = read(fd,&c,sizeof(c));
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. read()");
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
i = (0x00);

while(*(eq+(i))) {
r = cmpr_partially(&l,p,*(eq+(i)));
if(!r) {
printf("%s\n","<< Error at fn. cmpr_partially()");
return(0x00);
}
if(!l) {
r = (*(fn+(i))) (argp);
if(!r) {
printf("%s%d%s\n","<< Error at fn. (*(fn+(",i,"))) ()");
return(0x00);
}}
i++;
}

return(0x01+(cli_eq_internal(term,fd,argp)));
}
