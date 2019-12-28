/* **** Notes

Prepare the the two-row footer.

Remarks:
Along with C and Windows libraries
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_display_footer_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[CLI_OBJS];

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
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

/*
r = cl_spool_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cl_spool_beta()");
return(0x00);
}
//*/

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
}

return(0x01);
}
