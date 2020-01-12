/*

Output pages to the console screen.

Remarks:
Refer at fn. cli_load, fn. cli_load_internal, fn. cli_bind_pages and fn. cli_book.
Based on fn. cli_col_outs_beta, fn. cli_col_out_beta and fn. cli_out
Return the number of output pages.
*/


# define CLI_MACRO
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_output_pages_beta(signed short(connect_with/* workspace */),CLI_PAGE(*page),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short edge;
auto signed short y;

/* **** CODE/TEXT */
if(!page) return(0x00);
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

edge = (R(Bottom,R(srWindow,R(csbi,*argp))));
y = (R(Top,R(srWindow,R(csbi,*argp))));

if(connect_with) {
// connect with workspace
R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (R(y,*(coord+(CLI_BASE))));
R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (0x00);
r = cli_init_workspace(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}
r = ct(*(CLI_BASE+(R(base,*page))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. ct()");
return(0x00);
//*/
}
if(r<(R(size,R(roll,R(ty,*argp))))) {
r = cpy(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(base,*page))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}
ADD(R(gauge,R(debug,R(ty,*argp))),-r);
ADD(R(gauge,R(ty,*argp)),-r);
// also
*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))) = (page);
}
else {
printf("%s\n","<< Reach the limit..");
return(0x00);
}}

r = cli_output_pages_internal_beta(edge,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_output_pages_internal_beta()");
return(0x00);
}

i = (r);

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

return(i);
}
