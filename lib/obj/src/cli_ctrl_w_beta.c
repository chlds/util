/*

Press <Ctrl-W> to invoke the function.

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

signed(__cdecl cli_ctrl_w_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *label = ("Search: ");

auto CLI_COORD coord;
auto CLI_PAGE *page;
auto signed char *cur,*p;
auto signed c,i,r;
auto signed short flag;
auto signed short inte;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-W>");

/*
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
//*/

if(!(CL_SEARCH&(R(flag,R(ty,*argp))))) {
r = cli_display_footer_beta(0x01/* comeback */,label,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_display_footer_beta()");
return(0x00);
}
if(!(**(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))))) return(0x01);
}

r = cli_search_pages(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_search_pages()");
return(0x00);
}

if(!(R(flag,R(search,R(ty,*argp))))) {
flag = (~(CL_SEARCH));
AND(R(flag,R(ty,*argp)),flag);
/*
r = (*(CLI_LEAD+(R(size,R(roll,R(ty,*argp))))));
r = embed_to(*(CLI_LEAD+(R(base,R(roll,R(ty,*argp))))),0x00,r);
if(!r) {
printf("%s\n","<< Error at fn. embed_to()");
return(0x00);
}
//*/
return(0x01);
}

coord.y = (0x00);
coord.x = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}

inte = (R(Bottom,R(srWindow,R(csbi,*argp))));

page = (R(cache,R(spool,R(ty,*argp))));

r = cli_coord_output_pages_beta(CG_CLEAR|CG_EMUL,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_output_pages_beta()");
return(0x00);
}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

if(inte<(coord.y)) flag = (0x00);
else flag = (0x01);

if(flag) {
r = cli_clear_rows_beta(0x01/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}}

coord.y = (0x00);
coord.x = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

// after outputting
r = cli_connect_with_workspace(page,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}

ADD(*(CLI_INDEX+(R(cur,R(ty,*argp)))),R(offset,R(search,R(ty,*argp))));
cur = (*(CLI_BASE+(R(cur,R(ty,*argp)))));
while(0x01) {
if(cur<(*(CLI_INDEX+(R(cur,R(ty,*argp)))))) {
r = cli_coord_out_beta(cur,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}}
else break;
cur = (r+(cur));
}

R(offset,R(ty,*argp)) = (R(offset,R(search,R(ty,*argp))));

OR(R(flag,R(ty,*argp)),CL_SEARCH);

return(0x01);
}
