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

signed(__cdecl cli_grams_beta(signed short(flag),CLI_PAGE(*page),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short COMEBACK = (0x10);

auto CLI_COORD coord[0x02];
auto signed char *p;
auto signed i,r;
auto signed short inte;
auto signed short exte;

/* **** CODE/TEXT */
if(!page) return(0x00);
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

r = cli_grams_internal_beta(flag,inte,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_grams_internal_beta()");
return(0x00);
}

i = (r);

if(COMEBACK&(flag)) {
/* fix the frame */
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(exte^(R(Top,R(srWindow,R(csbi,*argp))))) {
R(y,*(coord+(CLI_OFFSET))) = (exte);
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
}}

r = cli_emul(CLI_OUT,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_emul()");
return(0x00);
}

return(i);
}
