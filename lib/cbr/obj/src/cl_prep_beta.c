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

signed(__cdecl cl_prep_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[CLI_OBJS];

auto signed char *p;
auto signed i,l,r;
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
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = (0x01+(R(Right,R(srWindow,R(csbi,*argp)))));

l = (r);

i = (l);
while(i) {
--i;
r = _putwch('*');
if(!(WEOF^(r))) {
printf("%s\n","<< Error at fn. _putwch()");
return(0x00);
}}

i = (l);
while(i) {
--i;
r = _putwch(' ');
if(!(WEOF^(r))) {
printf("%s\n","<< Error at fn. _putwch()");
return(0x00);
}}

// fix the frame
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

// come back
R(y,*(coord+(CLI_LEAD))) = (0x01+(R(y,*(coord+(CLI_OFFSET)))));
R(x,*(coord+(CLI_LEAD))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_LEAD),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
