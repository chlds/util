/* **** Notes

The n-row debug monitor

Remarks:
Along with C library
*/


# define CBR
# define CLI_W32

# define N_ROW (0x04)

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_mon(signed short(arg),cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short n_row = (/* CLI_HEADER_HEIGHT+( */N_ROW/* ) */);

auto signed char *p;
auto signed char *b;
auto cli_snapshot_t *snapshot;
auto cli_page_t *page;
auto cli_rule_t *rule;
auto cli_text_t *text;

auto coord_t coord;
auto rect_t rect;
auto signed i,l,r;
auto signed short flag;
auto signed short x,y;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!arg) return(0x01);

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
if(!(es(CTRL_A))) return(0x00);
if(!(es(CTRL_N))) return(0x00);
// r = _putch('\n');

/* monitor */
text = (&(R(text,*argp)));

AND(l,0x00);
AND(i,0x00);
while(i<(CLI_RULE)) {
rule = (i+(R(rule,*text)));
AND(i,0x00);
while(i<(CLI_RULE)) {
b = (*(i+(R(b,*rule))));
printf("%p [",b);
r = cli_coord_outs(R(align,*text),b);
printf("] ");
if(!(clear_rows(0x01))) return(0x00);
printf("\n");
i++;
}
AND(i,0x00);
l++;
i = (l+(i));
}

//* to monitor, refer at fn. cli_io.c and at hd. cli_d.h.
printf("Monitor at *(CLI_B/O/I/L+(R(cf,R(*text: \n");
//
AND(i,0x00);
while(0x01) {
if(!(i<(CLI_OBJS))) break;
p = (*(i+(R(cf,*text))));
printf("%p [",p);
r = cli_coord_outs(R(align,*text),p);
printf("] ");
if(!(clear_rows(0x01))) return(0x00);
printf("\n");
i++;
}
//*/

/* come back */
r = coord_beta(CLI_OUT,CLI_LEAD,&coord);
if(!r) {
r = cli_message(r,"<< Error at fn. coord_beta() \n");
return(0x00);
}

return(0x01);
}
