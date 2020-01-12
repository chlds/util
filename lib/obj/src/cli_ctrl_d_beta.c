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

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-D>");

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

y = (R(Top,R(srWindow,R(csbi,*argp))));

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

if(!(*p)) {
r = cli_merge_pages(&(R(spool,R(ty,*argp))));
if(!r) {
printf("%s\n","<< Error at fn. cli_merge_pages()");
return(0x00);
}
// to connect with workspace
r = ct(*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))));
if(r<(R(size,R(roll,R(ty,*argp))))) {
// connect with workspace
r = cpy(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}
R(gauge,R(debug,R(ty,*argp))) = (-r+(R(size,R(roll,R(ty,*argp)))));
R(gauge,R(ty,*argp)) = (-r+(R(size,R(roll,R(ty,*argp)))));
}
else {
printf("%s\n","<< Reached the limit..");
return(0x00);
}}

else {
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

r = cli_clear_output_beta(0x00/* come back */,*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_output_beta()");
return(0x00);
}

r = cli_output_pages_beta(0x00/* connect with workspace */,R(d,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))),argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_output_pages_beta()");
return(0x00);
//*/
}

/* fix the frame */
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(y^(R(Top,R(srWindow,R(csbi,*argp))))) {
R(y,*(coord+(CLI_OFFSET))) = (y);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
