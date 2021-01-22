/* **** Notes

Output characters in UTF-8 after decoding Unicode bytes input out of the key board.

Remarks:
Based on UTF-8
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_io(cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed DEL = (0x7F);

auto cli_text_t *t;
auto cli_b_t *b;
auto cli_b_t *p;
auto signed char *cur;
auto signed size;
auto signed dif;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CLI_INIT&(*(CLI_BASE+(R(flag,*argp)))))) return(0x00);

if(CLI_QUIT&(*(CLI_LEAD+(R(flag,*argp))))) return(0x01);
if(CLI_BR&(R(flag,R(text,*argp)))) return(0x01);

t = (&(R(text,*argp)));
r = cli_restore(0x00/* not remove an appendant */,t);
if(!r) {
printf("%s \n","<< Error at fn. cli_restore()");
return(0x00);
}

p = (&(R(append,*t)));
b = (&(R(b,*t)));
cur = (*(CLI_INDEX+(R(base,*b))));
size = (CLI_BB);

// get
r = cli_in(&i,cur,size);
if(!r) {
printf("%s \n","<< Error at fn. cli_in()");
return(0x00);
}

dif = (r);
// *(dif+(cur)) = (0x00);
if(!(DEL^(i))) i = (CTRL_D);

if(i<(0x20)) {
AND(dif,0x00);
r = cli_ctrl_fn(i,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_ctrl_fn()");
return(0x00);
}}

else {
// put
r = cli_out(cur);
if(!r) {
printf("%s \n","<< Error at fn. cli_out()");
return(0x00);
}
while(dif) {
INC(cur);
--dif;
}
*(CLI_INDEX+(R(base,*b))) = (cur);
}

b = (0x00);
p = (b);

return(0x01+(cli_io(argp)));
}
