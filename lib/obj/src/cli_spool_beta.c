/* **** Notes

Along with C and Windows libraries

Remarks:
Build a doubly linked list
Based on UTF-8
*/


# define CLI_W32
# define R(D,S) (S).D
// A local macro function

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_spool_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_SPOOL *spool;
auto CLI_COORD coord;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

// quit
if(!(CLI_QUIT^(R(flag,R(ty,*argp))))) return(0x01);

// coordinate
r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (coord.x);
R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (coord.y);

spool = (&(R(spool,R(ty,*argp))));
r = cli_bind_pages(spool);
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
return(0x00);
}

if(R(append,R(ty,*argp))) {
// copy subsequent characters to workspace
r = cpy(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}
// output
r = cli_col_outs_beta(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_col_outs_beta()");
return(0x00);
}
// come back
coord.x = (0x00);
coord.y = (R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))));
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

r = cli_kb_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_kb_beta()");
return(0x00);
}

// book
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

// return(0x01+(cli_spool_beta(argp)));
return(0x01);
}
