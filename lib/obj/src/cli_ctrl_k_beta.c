/*

Press <Ctrl-K> to invoke the function.

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

signed(__cdecl cli_ctrl_k_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto CLI_COORD coord[0x02];
auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-K>");

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

/* optional
r = cli_clip_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clip_beta()");
return(0x00);
}
//*/

flag = (0x00);

r = ct(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ADD(R(gauge,R(ty,*argp)),r);
**(CLI_INDEX+(R(cur,R(ty,*argp)))) = (0x00);

if(!r) {
// re-concatenate pages
r = cli_reconcat_pages(&flag/* backward */,&(R(spool,R(ty,*argp))));
if(!r) {
printf("%s\n","<< Error at fn. cli_reconcat_pages()");
return(0x00);
}
if(!(0x01^(flag))) flag = (0x02);
if(!flag) flag = (0x01);
}

if(!(flag^(~(0x00)))) return(0x01);

r = cli_clear_rows_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

if(!flag) {
//* i.e., printf("\n");
R(y,*(coord+(CLI_OFFSET))) = (R(y,*(coord+(CLI_BASE))));
ADD(R(y,*(coord+(CLI_OFFSET))),0x01);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
//*/
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
page = (R(d,*page));
if(page) {
r = cli_output_pages_beta(0x00/* connect with workspace */,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_output_pages_beta()");
return(0x00);
}}}

if(!(0x01^(flag))) {
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
r = cli_output_pages_beta(0x01/* connect with workspace */,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_output_pages_beta()");
return(0x00);
}
return(0x01);
}

if(!(0x02^(flag))) {
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
if(!(R(y,*(coord+(CLI_BASE))))) {
r = cli_output_pages_beta(0x01/* connect with workspace */,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_output_pages_beta()");
return(0x00);
}}
else {
r = cli_coord_beta(CLI_OUT,CLI_BASE+(R(coord,*page)),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}
return(0x01);
}

r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
