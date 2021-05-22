/* **** Notes

Display the month and year.
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_display_mo_yr(signed short(mo),signed short(yr),cals_t(*argp))) {

auto signed char *b;
auto rect_t rect;
auto signed i,r;
auto signed short flag;

if(mo<(0x00)) return(0x00);
if(0x0B<(mo)) return(0x00);
if(yr<(1900)) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);

// r = (COL_R);
if(!(rect_beta(CLI_IN,CLI_BASE,&rect))) return(0x00);
r = (*(CLI_BASE+(R(right,rect))));
r = (-0x05+(r));
r = sub_da(r,*(MONTH+(mo)));
if(r<(0x00)) return(0x00);
r = (-0x08+(r));
if(r<(0x00)) return(0x00);
printf("\t");
/*
if(!(cli_replace_text_attributes_beta(0x8F,&(R(property,*argp))))) {
cli_message(0x00,"<< Error at fn. cli_replace_text_attributes_beta() \n");
}
//*/
while(--r) printf("_");
printf("%s %d \n",*(MONTH+(mo)),yr);
/*
if(!(cli_restore_text_attributes_beta(&(R(property,*argp))))) {
cli_message(0x00,"<< Error at fn. cli_restore_text_attributes_beta() \n");
}
//*/

return(0x01);
}
