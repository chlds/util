/*

Coordinate and output a page to the console screen.

Remarks:
Return the number of output pages.
*/


# define CBR
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_coord_page_beta(signed short(flag),CLI_PAGE(*page),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];

auto signed char *p;
auto signed i,r;
auto signed short inte;
auto signed short exte;

/* **** CODE/TEXT */
if(!page) return(0x00);
if(!argp) return(0x00);

if(CG_EMUL&(flag)) {
r = cli_emul(CLI_IN,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_emul()");
return(0x00);
}}

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

// inte = (R(Bottom,R(srWindow,R(csbi,*argp))));
exte = (R(Top,R(srWindow,R(csbi,*argp))));

i = (CLI_OBJS);
while(i) {
--i;
R(y,*(i+(R(coord,*page)))) = (R(y,*(coord+(CLI_BASE))));
R(x,*(i+(R(coord,*page)))) = (R(x,*(coord+(CLI_BASE))));
}

p = (*(CLI_BASE+(R(base,*page))));
i = (CLI_OBJS);
while(i) {
--i;
*(i+(R(cur,R(ty,*argp)))) = (p);
}

r = cli_coord_outs_beta(p,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_outs_beta()");
return(0x00);
//*/
}

i = (r);
R(y,*(CLI_LEAD+(R(coord,*page)))) = (R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))));
R(x,*(CLI_LEAD+(R(coord,*page)))) = (R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))));

if(CG_CLEAR&(flag)) {
r = cli_clear_row_beta(0x00/* comeback */,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_clear_row_beta()");
return(0x00);
}}

if(CG_COMEBACK&(flag)) {
/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
/* fix the frame */
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(exte^(R(Top,R(srWindow,R(csbi,*argp))))) {
//* by scrolling the content
exte = (-exte+(R(Top,R(srWindow,R(csbi,*argp)))));
r = cli_scroll_beta(-exte,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_scroll_beta()");
return(0x00);
}}}

if(CG_EMUL&(flag)) {
r = cli_emul(CLI_OUT,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_emul()");
return(0x00);
}}

return(i);
}
