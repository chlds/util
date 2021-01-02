/* **** Notes

Clear rows.

Remarks:
Refer at fn. cli_clear_row_beta.
Return the number of cleared rows.
*/


# define CBR
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_clear_rows_beta(signed short(comeback),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];

auto signed i,r;
auto signed short flag;
auto signed short inte;
auto signed short exte;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

inte = (R(Bottom,R(srWindow,R(csbi,*argp))));
exte = (R(Top,R(srWindow,R(csbi,*argp))));

r = cli_clear_rows_internal_beta(inte,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_clear_rows_internal_beta()");
return(0x00);
}

i = (r);

// come back
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

// fix the frame
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}

if(exte^(R(Top,R(srWindow,R(csbi,*argp))))) {
//* by scrolling the content
exte = (-exte+(R(Top,R(srWindow,R(csbi,*argp)))));
r = cli_scroll_beta(-exte,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_scroll_beta()");
return(0x00);
}}

if(!comeback) {
r = _putch(LF);
if(!(EOF^(r))) {
printf("%s \n","<< Error at fn. _putch()");
return(0x00);
}}

return(i);
}
