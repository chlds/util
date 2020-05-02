/* **** Notes

Clear rows to the end.

Remarks:
Refer at fn. cli_clear_row_beta.
Return the number of space embedded to the row.
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_clear_to_beta(signed short(comeback),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char sp = (' ');

auto CLI_COORD coord[0x02];
auto COORD ord;
auto signed i,l,r;
auto signed short flag;
auto signed short exte;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("<< Error at fn. cli_coord_beta()");
return(0x00);
}

exte = (R(Top,R(srWindow,R(csbi,*argp))));

i = (signed) (R(y,*(coord+(CLI_BASE))));
i = (-i+(0x01+(R(Bottom,R(srWindow,R(csbi,*argp))))));
i = (i*(0x01+(R(Right,R(srWindow,R(csbi,*argp))))));
i = (i+(-(R(x,*(coord+(CLI_BASE))))));

ord.X = R(x,*(coord+(CLI_BASE)));
ord.Y = R(y,*(coord+(CLI_BASE)));

r = FillConsoleOutputCharacter(*(CLI_OUT+(R(device,*argp))),sp,i,ord,&l);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. FillConsoleOutputCharacter() with no. ",r," or ",r);
return(0x00);
}
if(i^(l)) {
r = GetLastError();
printf("%s%d%s%Xh","<< Error at fn. FillConsoleOutputCharacter() with no. ",r," or ",r);
printf(" %s%d%s%d\n","and i/l: ",i,"/",l);
return(0x00);
}

if(comeback) {
// fix the frame
r = cli_get_csbi_beta(argp);
if(!r) {
printf("<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(exte^(R(Top,R(srWindow,R(csbi,*argp))))) {
/* by scrolling the content
exte = (-exte+(R(Top,R(srWindow,R(csbi,*argp)))));
r = cli_scroll_beta(-exte,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_scroll_beta()");
//*/
//* by putting the cursor
R(y,*(coord+(CLI_OFFSET))) = (exte);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
//*/
return(0x00);
}}
// come back
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

return(i);
}
