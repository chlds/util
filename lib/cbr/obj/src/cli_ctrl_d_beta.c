/*

Press <Ctrl-D> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_d_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_page_t *page;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-D>");

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

if(!(*p)) {
r = cli_merge_pages(&(R(spool,R(ty,*argp))));
if(!r) {
printf("%s\n","<< Error at fn. cli_merge_pages()");
return(0x00);
}
// to connect with workspace
r = ct(*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))));
r = (-r+(*(CLI_BASE+(R(size,R(roll,R(ty,*argp)))))));
if(r<(0x01)) {
r = extend(CLI_BASE+(R(base,R(roll,R(ty,*argp)))),CLI_BASE+(R(size,R(roll,R(ty,*argp)))),CLI_EMPTY+(0x02+(~(r))));
if(!r) {
printf("%s\n","<< Error at fn. extend()");
return(0x00);
}
i = (r);
r = cli_init_workspace(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}
while(i) {
INC(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
--i;
}
*(CLI_LEAD+(R(cur,R(ty,*argp)))) = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
}
// connect with workspace
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
flag = (R(flag,*page));
R(flag,R(ty,*argp)) = (flag);
r = cpy(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(base,*page))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}
i = (*(CLI_BASE+(R(size,R(roll,R(ty,*argp))))));
R(gauge,R(ty,*argp)) = (-r+(i));
OR(R(flag,R(ty,*argp)),CLI_FORCED|CLI_REFRESH);
return(0x01);
}

r = nbytechar(*p);
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}
if(!(0x80^(r))) {
printf("%s\n","<< Error at fn. nbytechar() with (0x80)");
return(0x00);
}

ADD(R(gauge,R(ty,*argp)),r);
while(r) {
INC(p);
--r;
}

**(CLI_INDEX+(R(cur,R(ty,*argp)))) = (0x00);
r = concat_b(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(cur,R(ty,*argp)))),p,(void*) 0x00);
if(!r) {
printf("%s\n","<< Error at fn. concat_b()");
return(0x00);
}

OR(R(flag,R(ty,*argp)),CLI_REFRESH);

return(0x01);
}
