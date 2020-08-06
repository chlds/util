/* **** Notes

Clear rows.

Remarks:
Refer at fn. cli_clear_row_beta.
*/


# define CBR
# define CLI_W32

# include "../../../incl/config.h"

signed(__cdecl cli_clear_rows_internal_beta(signed short(edge),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

if(edge<(coord.y)) return(0x00);

r = cli_clear_row_beta(0x00/* come back */,argp);
if(!r) {
printf("<< Error at fn. cli_clear_row_beta()");
return(0x00);
}

return(0x01+(cli_clear_rows_internal_beta(edge,argp)));
}
