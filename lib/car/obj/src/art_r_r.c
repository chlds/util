/* **** Notes

Read content out of FILE in column.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl art_r_r(signed short(*flag),signed short(cols),signed char(*sym),signed(fd))) {

static signed char lf = (LF);
auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x08);
auto signed const DELAY = (0x02*(QUANTUM));
auto signed short COLS = (72); // default
auto signed char *b;
auto signed i,r;

if(!flag) return(0x00);
if(!sym) return(0x00);

if(cols<(0x01)) cols = (COLS);

b = (0x00);
r = read2_b(&b,sym,fd);
if(!b) {
printf("%s \n","<< Error at fn. read2_b()");
return(0x00);
}
if(!r) {
AND(*flag,(~CLI_ERROR));
if(b) rl(b);
b = (0x00);
return(0x00);
}

r = rm_crlf(b);
if(!b) {
printf("%s \n","<< Error at fn. rm_crlf()");
OR(*flag,CLI_IRR);
// return(0x00);
}

if(!(CLI_IRR&(*flag))) {
r = cli_output(0x00,cols,sym,b);
if(!r) {
OR(*flag,CLI_IRR);
printf("%s \n","<< Error at fn. cli_output()");
// return(0x00);
}}

embed(0x00,b);
if(b) rl(b);
b = (0x00);

if(CLI_IRR&(*flag)) return(0x00);

if(OPT_VERBOSE&(*flag)) {
}

return(0x01+(art_r_r(flag,cols,sym,fd)));
}
