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

signed(__cdecl cli_output_pages_beta(CLI_PAGE(*page),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto signed char *p;
auto signed c,i,r;

/* **** CODE/TEXT */
if(!page) return(0x00);
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

// connect with workspace
R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (coord.y);
R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (0x00);
r = cpy(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(base,*page))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

// also
*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))) = (page);

r = cli_output_pages_internal_beta(page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_output_pages_internal_beta()");
return(0x00);
}

i = (r);

r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(i);
}
