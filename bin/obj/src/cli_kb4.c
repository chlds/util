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

signed(__cdecl main(signed(argc),signed char(**argv))) {

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

// to monitor
if(0x01<(argc)) OR(*(CLI_BASE+(R(flag,property))),CLI_MONITOR);

// announce
cputs("Please type the <Enter> key to stop. \n\n");

AND(flag,0x00);
r = cli_vt_opt(&property);
if(!r) {
printf("%s \n","<< Error at fn. cli_vt_opt()");
flag++;
// return(0x00);
}

cputs(" \n\n");

if(!flag) {
cputs("Based on UTF-8: \n");
b = (*(CLI_BASE+(R(b,*(CLI_BASE+(R(rule,R(text,property))))))));
if(!b) return(0x00);
r = cli_coord_outs(R(align,R(text,property)),b);
cputs(" \n\n");
printf("[%d %s] \n",ct_words(*(CLI_BASE+(R(sym,R(text,property)))),b),"words");
printf("[%d %s] \n",ct_letters(b),"letters");
printf("[%d %s] \n",ct_characters(b),"characters");
printf("[%d %s] \n",r,"bytes");
}

r = cli_init_property(0x01,&property);
if(!r) {
printf("%s \n","<< Error at fn. cli_init_property()");
return(0x00);
}

// check
AND(i,0x00);
OR(i,CLI_OBJS);
while(i) if(*(CLI_BASE+(R(b,*(--i+(R(rule,R(text,property)))))))) return(0x00);

cputs(" \n");
if(!flag) printf("%s \n","Done!");
else printf("%s \n","Oops!");

return(0x01);
}
