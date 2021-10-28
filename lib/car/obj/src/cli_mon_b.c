/* **** Notes

The n-row debug monitor
*/


# define CBR
# define CLI_W32
# define N_ROW (0x04)
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_mon_b(ty_t(*argp))) {

auto signed char *b;
auto signed char *p;
auto rule_t *rule;
auto page_t *page;
auto coord_t coord;
auto rect_t rect;
auto signed i,l,r;
auto signed short flag;
auto signed short x,y;
auto signed char c;
auto signed short n_row = (/* CLI_HEADER_HEIGHT+( */N_ROW/* ) */);

// if(!arg) return(0x01);
if(!argp) return(0x00);

r = coord_beta(CLI_IN,CLI_RULE,&coord);
if(!r) {
r = cli_message(r,"<< Error at fn. coord_beta() \n");
return(0x00);
}

r = rect_beta(CLI_IN,CLI_RULE,&rect);
if(!r) {
r = cli_message(r,"<< Error at fn. rect_beta() \n");
return(0x00);
}

/* coordinate */
y = (n_row+(*(CLI_BASE+(R(top,rect)))));
x = (0x00);
*(CLI_BASE+(R(x,coord))) = (x);
*(CLI_BASE+(R(y,coord))) = (y);

r = coord_beta(CLI_OUT,CLI_BASE,&coord);
if(!r) {
r = cli_message(r,"<< Error at fn. coord_beta() \n");
return(0x00);
}

/* output */
i = (0x01+(*(CLI_BASE+(R(right,rect)))));
while(--i) r = _putch('*');
if(!(cli_es(CTRL_A))) return(0x00);
if(!(cli_es(CTRL_N))) return(0x00);
// r = _putch('\n');

/* monitor */
// page = (&(R(page,*argp)));

AND(l,0x00);
AND(i,0x00);
while(i<(CLI_RULE)) {
rule = (i+(R(rule,*argp)));
AND(i,0x00);
while(i<(CLI_RULE)) {
b = (*(i+(R(b,*rule))));
printf("%p [",b);
// r = cli_coord_outs(0x08/* align */,b);
r = cli_outs_b(0x08/* align */,b);
printf("] ");
if(!(clear_rows(0x01))) return(0x00);
printf("\n");
i++;
}
AND(i,0x00);
l++;
i = (l+(i));
}

/* come back */
r = coord_beta(CLI_OUT,CLI_LEAD,&coord);
if(!r) {
r = cli_message(r,"<< Error at fn. coord_beta() \n");
return(0x00);
}

return(0x01);
}
