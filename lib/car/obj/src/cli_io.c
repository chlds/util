/* **** Notes

Output characters in UTF-8 after decoding Unicode bytes input out of the key board.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_io(cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
static signed char buff[CLI_RULE][0x500]; // to monitor
auto signed DEL = (0x7F);

auto cli_text_t *text;
auto cli_rule_t *rule;
auto signed char *b;
auto signed char *p; // to monitor
auto signed size;
auto signed dif;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CLI_INIT&(*(CLI_BASE+(R(flag,*argp)))))) return(0x00);

if(CLI_QUIT&(R(flag,R(text,*argp)))) return(0x01);
if(CLI_BR&(R(flag,R(text,*argp)))) return(0x01);

text = (&(R(text,*argp)));
flag = (CLI_REFRESH&(R(flag,*text)));
r = cli_restore(flag/* append or not.. */,text);
if(!r) {
printf("%s \n","<< Error at fn. cli_restore()");
return(0x00);
}

//* to monitor
if(CLI_MONITOR&(*(CLI_BASE+(R(flag,*argp))))) {
rule = (CLI_BASE+(R(rule,*text)));
AND(i,0x00);
while(0x01) {
if(!(i<(CLI_RULE))) break;
p = (*(i+(buff)));
cpy(p,*(i+(R(b,*rule))));
*(i+(R(cf,*text))) = (p);
i++;
}}

r = cli_refresh(text);
if(!r) return(0x00);

rule = (CLI_BASE+(R(rule,*text)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!b) return(0x00);

embed(0x00,b);
size = (CLI_BB);

// monitor
flag = (CLI_MONITOR&(*(CLI_BASE+(R(flag,*argp)))));
r = cli_mon(flag,argp);
if(!r) {
r = cli_message(r,"<< Error at fn. cli_mon() \n");
return(0x00);
}

// get
dif = cli_in(&i,b,size);
if(!dif) {
printf("%s \n","<< Error at fn. cli_in()");
return(0x00);
}

if(!(DEL^(i))) i = (CTRL_D);
if(i<(CTRL_KEYS)) AND(dif,0x00);
embed(0x00,dif+(b));

if(i<(CTRL_KEYS)) {
r = cli_ctrl_fn(i,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_ctrl_fn()");
return(0x00);
}}

else {
// put
r = cli_coord_out(R(align,*text),b);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_out()");
return(0x00);
}
b = (dif+(b));
*(CLI_INDEX+(R(b,*rule))) = (b);
OR(R(flag,*text),CLI_REFRESH);
}

b = (0x00);

return(0x01+(cli_io(argp)));
}
