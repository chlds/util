/*

Coordinate and output pages to the console screen.

Remarks:
Refer at fn. cli_load, fn. cli_load_internal, fn. cli_bind_pages and fn. cli_book.
Return the number of output pages.
*/


# define CLI_MACRO
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_coord_clear_output_pages_beta(signed char(*cur),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];
auto CLI_PAGE *page;

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short inte,exte;
auto signed short y;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

r = cli_emul(CLI_IN,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_emul()");
return(0x00);
}

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

inte = (R(Bottom,R(srWindow,R(csbi,*argp))));
exte = (R(Top,R(srWindow,R(csbi,*argp))));

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

r = cli_coord_outs_beta(cur,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_outs_beta()");
return(0x00);
//*/
}

R(y,*(CLI_LEAD+(R(coord,*page)))) = (R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))));
R(x,*(CLI_LEAD+(R(coord,*page)))) = (R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))));

r = cli_clear_row_beta(0x00/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_row_beta()");
return(0x00);
}

page = (R(d,*page));

r = cli_coord_clear_output_pages_internal_beta(inte,page,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_clear_output_pages_internal_beta()");
return(0x00);
//*/
}

i = (r);
i++;

y = (R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))));
if(y<(inte)) {
r = cli_clear_rows_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}}

/* fix the frame */
R(y,*(coord+(CLI_OFFSET))) = (exte);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = cli_emul(CLI_OUT,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_emul()");
return(0x00);
}

return(i);
}
