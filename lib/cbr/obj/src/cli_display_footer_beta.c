/* **** Notes

Prepare the the two-row footer.

Remarks:
Along with C and Windows libraries
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_display_footer_beta(signed short(comeback),signed char(*label),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[CLI_OBJS];
auto CLI_COORD coord_s;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!label) return(0x00);
if(!argp) return(0x00);

r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}

R(y,*(coord+(CLI_INDEX))) = (R(Y,R(dwCursorPosition,R(csbi,*argp))));
R(x,*(coord+(CLI_INDEX))) = (R(X,R(dwCursorPosition,R(csbi,*argp))));

R(y,*(coord+(CLI_BASE))) = (R(Top,R(srWindow,R(csbi,*argp))));
R(x,*(coord+(CLI_BASE))) = (0x00);

r = (CLI_FOOTER_HEIGHT);
r = (0x02+(~(r)));
if(0x00<(r)) return(0x00);
R(y,*(coord+(CLI_OFFSET))) = (r+(R(Bottom,R(srWindow,R(csbi,*argp)))));
R(x,*(coord+(CLI_OFFSET))) = (0x00);

/* The two-row footer */
r = cl_prep_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cl_prep_beta()");
return(0x00);
}

printf("%s",label);

r = cli_coord_beta(CLI_IN,&coord_s,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

i = (CLI_OBJS);
while(i) {
--i;
R(y,*(i+(R(coord,R(commandline,R(ty,*argp)))))) = (coord_s.y);
R(x,*(i+(R(coord,R(commandline,R(ty,*argp)))))) = (coord_s.x);
}

i = (*(CLI_INDEX+(R(size,R(roll,R(ty,*argp))))));
r = embed(i,*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
printf("%s\n","<< Error at fn. embed()");
return(0x00);
}

i = (*(CLI_OFFSET+(R(size,R(roll,R(ty,*argp))))));
r = embed(i,*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
printf("%s\n","<< Error at fn. embed()");
return(0x00);
}

r = cl_kb_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cl_kb_beta()");
return(0x00);
}

// for search
r = cpy(*(CLI_LEAD+(R(base,R(roll,R(ty,*argp))))),*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

r = embed(i,*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
printf("%s\n","<< Error at fn. embed()");
return(0x00);
}

if(comeback) {
// fix the frame
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
// come back
r = cli_coord_beta(CLI_OUT,coord+(CLI_INDEX),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

return(0x01);
}
