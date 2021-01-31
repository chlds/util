/*

Press <Ctrl-K> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_k_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_page_t *page;

auto CLI_COORD coord[0x02];
auto signed char *b;
auto signed c,i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-K>");

/* optional
r = cli_clip_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clip_beta()");
return(0x00);
}
//*/

r = ct(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
i = (r);
ADD(R(gauge,R(ty,*argp)),r);
// **(CLI_INDEX+(R(cur,R(ty,*argp)))) = (0x00);
r = embed(0x00,*(CLI_INDEX+(R(cur,R(ty,*argp)))));

b = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(EQ(b,*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))))) flag = (0x01);
else flag = (0x00);

if(flag) {
r = cli_book_no_history(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book_no_history()");
return(0x00);
}}

if(!i) flag++;

if(flag) {
r = cli_ctrl_d_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_d_beta()");
return(0x00);
}
return(0x01);
}

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (R(y,*(coord+(CLI_BASE))));
R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (R(x,*(coord+(CLI_BASE))));

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

OR(R(flag,R(ty,*argp)),CLI_REFRESH);

return(0x01);
}
