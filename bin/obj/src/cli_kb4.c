/* **** Notes

Output characters in UTF-8.

Remarks:
Based on UTF-8
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <windows.h>
# include "../../../lib/incl/config.h"

signed(__cdecl main(void)) {

/* **** DATA, BSS and STACK */
auto signed char *b;

auto cli_property_t property;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
system("cls");

r = cli_init_property(0x00,&property);
if(!r) {
printf("%s \n","<< Error at fn. cli_init_property()");
return(0x00);
}

// Announcements
cputs("Please type the <Enter> key to stop. \n\n");

r = cli_opt(&property);
if(!r) {
printf("%s \n","<< Error at fn. cli_opt()");
return(0x00);
}

cputs(" \n\n");
cputs("Based on UTF-8: ");

b = (*(CLI_BASE+(R(base,R(b,R(text,property))))));
if(!b) return(0x00);
r = cli_outs(b);

cputs(" \n");
printf("[%d %s] \n",r,"bytes");

r = cli_init_property(0x01,&property);
if(!r) {
printf("%s \n","<< Error at fn. cli_init_property()");
return(0x00);
}

b = (*(CLI_BASE+(R(base,R(b,R(text,property))))));
if(b) return(0x00);

cputs(" \n");
printf("%s \n","Done!");

return(0x01);
}
