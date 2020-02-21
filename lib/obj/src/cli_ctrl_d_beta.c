/*

Press <Ctrl-D> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_d_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];
auto CLI_COORD coord_b;
auto CLI_PAGE *page;

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short inte;
auto signed short exte;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-D>");

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

inte = (R(Bottom,R(srWindow,R(csbi,*argp))));
exte = (R(Top,R(srWindow,R(csbi,*argp))));

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

if(!(*p)) {
flag = (0x01);
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
r = cpy(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}
i = (*(CLI_BASE+(R(size,R(roll,R(ty,*argp))))));
R(gauge,R(debug,R(ty,*argp))) = (-r+(i));
R(gauge,R(ty,*argp)) = (-r+(i));
}

else {
flag = (0x00);
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
r = concats(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(cur,R(ty,*argp)))),p,(void*) 0x00);
if(!r) {
printf("%s\n","<< Error at fn. concats()");
return(0x00);
}}

if(!flag) {
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
y = (R(y,*(CLI_LEAD+(R(coord,*page)))));
if(y^(R(y,*(coord+(CLI_BASE))))) flag = (0x01);
}

if(!flag) {
r = cli_gram_beta(0x01/* come back */,*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_gram_beta()");
return(0x00);
}
return(0x01);
}

r = cli_coord_clear_output_pages_beta(*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_clear_output_pages_beta()");
return(0x00);
}

return(0x01);
}
