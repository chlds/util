/* **** Notes

Along with C and Windows libraries

Remarks:
Build a doubly linked list
Based on UTF-8
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_spool_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short update;

/* **** CODE/TEXT */
if(!argp) return(0x00);

// quit
if(!(CLI_QUIT^(R(flag,R(ty,*argp))))) return(0x01);

update = (0x01);

if(R(fd,R(edit,R(ty,*argp)))) {
R(fd,R(edit,R(ty,*argp))) = (0x00);
update = (0x00);
i = (CLI_WORKSPACE);
while(--i) {
r = embed_to(*(i+(R(base,R(roll,R(ty,*argp))))),0x00,*(i+(R(size,R(roll,R(ty,*argp))))));
if(r^(*(i+(R(size,R(roll,R(ty,*argp))))))) {
printf("%s\n","<< Error at fn. embed_to()");
return(0x00);
}}}

else {
if(CLI_PAGE_BR&(R(flag,R(ty,*argp)))) flag = (0x01);
else flag = (0x00);
// initialise
r = cli_init_workspace(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}
// clear
i = (CLI_ROLLS);
while(i) {
--i;
r = embed_to(*(i+(R(base,R(roll,R(ty,*argp))))),0x00,*(i+(R(size,R(roll,R(ty,*argp))))));
if(!r) {
printf("%s\n","<< Error at fn. embed_to()");
return(0x00);
}}
// append
p = (*(CLI_BASE+(R(append,R(ty,*argp)))));
if(p) {
// copy subsequent characters to workspace
r = cpy(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),p);
if(!r) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}
free(p);
p = (0x00);
*(CLI_BASE+(R(append,R(ty,*argp)))) = (p);
}
if(flag) OR(R(linebreak,R(ty,*argp)),0x01);
r = cli_bind_pages(&(R(spool,R(ty,*argp))));
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
return(0x00);
}
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

i = (CLI_OBJS);
while(i) {
--i;
R(y,*(i+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))) = (coord.y);
R(x,*(i+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))) = (coord.x);
}

R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (coord.y);
R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (coord.x);

if(update) {
//* aux.
r = cli_clear2_rows_beta(0x01/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear2_rows_beta()");
return(0x00);
}
flag = (CG_COMEBACK|CG_EMUL);
//*/
// flag = (CG_COMEBACK|CG_CLEAR|CG_EMUL);
r = cli_coord_output_pages_beta(flag,*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_output_pages_beta()");
return(0x00);
}}

r = cli_kb_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_kb_beta()");
return(0x00);
}

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

if(CLI_MONO) return(0x01);

return(0x01+(cli_spool_beta(argp)));
}
