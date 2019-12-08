/* **** Notes

Clear rows.

Remarks:
Refer at fn. cli_clear_row_beta.
*/


# define R(D,S) (S).D
// A local macro function

# include "../../../incl/cli_w32.h"

signed(__cdecl cli_clear_rows_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];

auto signed i,r;
auto signed short range;
auto signed short flag;
auto signed char ws;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_get_csbi_beta(argp);
if(!r) {
printf("<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}

R(x,*(coord+(CLI_BASE))) = (0x00);
R(y,*(coord+(CLI_BASE))) = (R(Top,R(srWindow,R(csbi,*argp))));

R(x,*(coord+(CLI_OFFSET))) = (R(X,R(dwCursorPosition,R(csbi,*argp))));
R(y,*(coord+(CLI_OFFSET))) = (R(Y,R(dwCursorPosition,R(csbi,*argp))));

range = (R(Bottom,R(srWindow,R(csbi,*argp))));
if(!(range^(R(Y,R(dwCursorPosition,R(csbi,*argp)))))) flag = (0x01);
else flag = (0x00);

r = cli_clear_row_beta(flag/* come back */,argp);
if(!r) {
printf("<< Error at fn. cli_clear_row_beta()");
return(0x00);
}

if(flag) return(r);
else i = (r);

range = (R(y,*(coord+(CLI_OFFSET))));
range = (0x01+(~(range)));
range = (range+(R(Bottom,R(srWindow,R(csbi,*argp)))));
// range++;
range = (range*(0x01+(R(Right,R(srWindow,R(csbi,*argp))))));

i = (i+((signed) range));
ws = (' ');

while(range) {
--range;
r = cli_out(&ws);
if(!r) {
printf("%s\n","<< Error at fn. cli_out()");
return(0x00);
}}

// fix the frame
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

// come back
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(i);
}
