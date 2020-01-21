/*

Undo or redo.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_do_beta(signed short(arg),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto CLI_SNAPSHOT *snapshot;
auto CLI_PAGE *page;
auto signed char *base,*p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
if(!page) {
printf("%s\n","<< Could not find the index page at *(CLI_INDEX+(R(page,R(spool,R(ty,*argp..");
return(0x00);
}

snapshot = (*(CLI_INDEX+(R(snapshot,R(history,*page)))));
if(!snapshot) {
printf("%s\n","<< Could not find the index snapshot at *(CLI_INDEX+(R(snapshot,R(history,*page..");
return(0x00);
}

// undo or redo
if(!arg) snapshot = (R(s,*snapshot));
else snapshot = (R(d,*snapshot));

if(!snapshot) return(0x01);

*(CLI_INDEX+(R(snapshot,R(history,*page)))) = (snapshot);

p = (*(CLI_BASE+(R(base,*snapshot))));
if(!p) {
printf("%s\n","<< No allocation at *(CLI_BASE+(R(base,*snapshot..");
return(0x00);
}

r = ct(p);
INC(r);
r = (r*(sizeof(signed char)));

i = (*(CLI_BASE+(R(size,R(roll,R(ty,*argp))))));
if(i<(r)) {
r = cli_extend(0x01/* cue */,CLI_EMPTY+(-i+(r))/* extra */,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_extend()");
return(0x00);
}}

r = cpy(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),p);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

i = (r);

r = cli_init_workspace(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}
else {
ADD(R(gauge,R(debug,R(ty,*argp))),-i);
ADD(R(gauge,R(ty,*argp)),-i);
ADD(*(CLI_LEAD+(R(cur,R(ty,*argp)))),i);
}

coord.y = (R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))));
coord.x = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = cli_clear_output_beta(0x01/* comeback */,*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_output_beta()");
return(0x00);
}

i = (R(offset,*snapshot));
// e.g., ADD(*(CLI_INDEX+(R(cur,R(ty,*argp)))),i);
while(i) {
INC(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
--i;
}

base = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

while(0x01) {
if(base<(p)) {
r = cli_coord_out_beta(base,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}}
else break;
base = (r+(base));
}

return(0x01);
}
