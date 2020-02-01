/*

Output characters based on UTF-8 to the console screen.

Remarks:
Based on fn. cli_output_beta, fn. cli_col_outs_beta, fn. cli_col_out_beta and fn. cli_out
Return the number of bytes for output characters.
*/


# define CLI_MACRO
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_clear_output_beta(signed short(comeback),signed char(*cur),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];

auto signed char *p;
auto signed c,i,r;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

if(comeback) {
r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

r = cli_coord_outs_beta(cur,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_outs_beta()");
return(0x00);
//*/
}

i = (r);

r = cli_clear_row_beta(0x00/* come back */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_row_beta()");
return(0x00);
}

ADD(i,r);

if(comeback) {
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

else {
R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (0x00);
R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (0x00);
}

return(i);
}
