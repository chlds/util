/* **** Notes

Along with C and Windows libraries

Remarks:
Build a doubly linked list
Based on UTF-8
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_kb(cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto cli_b_t *b;
auto cli_b_t *p;
auto signed char *cur;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CLI_INIT&(*(CLI_BASE+(R(flag,*argp)))))) return(0x00);

if(CLI_QUIT&(*(CLI_LEAD+(R(flag,*argp))))) return(0x01);

if(CLI_PBR&(R(flag,R(text,*argp)))) flag = (0x01);
else flag = (0x00);

/*
r = cli_bind_leaves(&(R(leaflet,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_bind_leaves()");
return(0x00);
}

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_book()");
return(0x00);
}}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

i = (-0x01+(CLI_OBJS));
while(i) {
--i;
R(y,*(i+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))) = (coord.y);
R(x,*(i+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))) = (coord.x);
}

R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (coord.y);
R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (coord.x);

r = cli_clear_rows_beta(0x01,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}
flag = (CG_COMEBACK|CG_EMUL);

// flag = (CG_COMEBACK|CG_CLEAR|CG_EMUL);
r = cli_coord_output_pages_beta(flag,*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_output_pages_beta()");
return(0x00);
}}
//*/

r = cli_io(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_io()");
return(0x00);
}

if(CLI_MONO) return(0x01);
if(CLI_MONO) system("cls");

return(0x01);
}
