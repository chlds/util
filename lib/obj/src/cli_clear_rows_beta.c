/* **** Notes

Clear rows.

Remarks:
Refer at fn. cli_clear_row_beta.
Return the number of cleared rows.
*/


# define CLI_MACRO
# define CLI_W32

# include "../../../incl/config_ty.h"

signed(__cdecl cli_clear_rows_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];

auto signed i,r;
auto signed short flag;
auto signed short edge;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

edge = (R(Bottom,R(srWindow,R(csbi,*argp))));
y = (R(Top,R(srWindow,R(csbi,*argp))));

r = cli_clear_rows_internal_beta(edge,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_internal_beta()");
return(0x00);
}

i = (r);

// fix the frame
R(y,*(coord+(CLI_OFFSET))) = (y);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

// come back
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(i);
}
