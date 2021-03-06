/*

Output to the console screen.

Remarks:
Return the number of output bytes.
Refer at fn. cli_io_beta.
*/


# define CBR
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_gram_beta(signed short(flag),signed char(*cur),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];
auto cli_page_t *page;

auto signed char *p;
auto signed i,r;
auto signed short inte;
auto signed short exte;
auto signed short y;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

if(CG_EMUL&(flag)) {
r = cli_emul(CLI_IN,&(R(ty,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_emul()");
return(0x00);
}}

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

inte = (R(Bottom,R(srWindow,R(csbi,*argp))));
exte = (R(Top,R(srWindow,R(csbi,*argp))));

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
// y = (R(y,*(CLI_LEAD+(R(coord,*page)))));

r = cli_coord_outs_beta(cur,argp);
if(!r) {
/* empty or..
printf("%s \n","<< Error at fn. cli_coord_outs_beta()");
return(0x00);
//*/
}

i = (r);
R(y,*(CLI_LEAD+(R(coord,*page)))) = (R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))));
R(x,*(CLI_LEAD+(R(coord,*page)))) = (R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))));

if(CG_CLEAR&(flag)) {
r = cli_clear_row_beta(0x00/* come back */,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_clear_row_beta()");
return(0x00);
}}

if(CG_COMEBACK&(flag)) {
/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
/* fix the frame */
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(exte^(R(Top,R(srWindow,R(csbi,*argp))))) {
//* by scrolling the content
exte = (-exte+(R(Top,R(srWindow,R(csbi,*argp)))));
r = cli_scroll_beta(-exte,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_scroll_beta()");
//*/
/* by putting the cursor
R(y,*(coord+(CLI_OFFSET))) = (exte);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_beta()");
//*/
return(0x00);
}}}

if(CG_EMUL&(flag)) {
r = cli_emul(CLI_OUT,&(R(ty,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_emul()");
return(0x00);
}}

return(i);
}
