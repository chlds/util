/* **** Notes

Prepare the the two-row footer.

Remarks:
Along with C and Windows libraries
*/


# define CAR
# include <io.h>
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cl_prep(void)) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto coord_t coord;
auto rect_t rect;
auto signed i,r;
auto signed short cy,y;
auto signed short flag;

/* **** CODE/TEXT */
r = coord_report(CLI_RULE,&coord);
if(!r) {
printf("%s \n","<< Error at fn. coord_report()");
return(0x00);
}

r = rect_beta(CLI_IN,CLI_RULE,&rect);
if(!r) {
printf("%s \n","<< Error at fn. rect_beta()");
return(0x00);
}

cy = (*(CLI_BASE+(R(y,coord))));
y = (*(CLI_BASE+(R(bottom,rect))));
y++;
if(!(cli_es(CTRL_A))) return(0x00);
if(!(cy^(y+(0x01+(~(*(CLI_BASE+(R(top,rect))))))))) {
if(!(cli_es(CTRL_U))) return(0x00);
}
else {
y = (y+(0x01+(~cy)));
y = (y+(0x01+(0x01+(~CLI_FOOTER_HEIGHT))));
if(y<(0x00)) return(0x00);
while(y) {
--y;
if(!(cli_es(CTRL_N))) return(0x00);
}}

if(!(cli_es(CTRL_K))) return(0x00);

/* The two-row footer */
r = (signed) (0x01+(*(CLI_BASE+(R(right,rect)))));
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

*(--r+(b)) = (0x00);
while(r) *(--r+(b)) = ('*');

r = write(COUT,b,ct(b));
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. write()");
return(0x00);
}

embed(0x00,b);
rl(b);
b = (0x00);

printf("\r");
printf("\n");

if(!(cli_es(CTRL_K))) return(0x00);

return(0x01);
}
