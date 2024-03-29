/* **** Notes

Read content out of FILE in column.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl art_r_r(signed short(*flag),signed short(cols),signed char(*sym),signed(fd))) {

auto signed char *b;
auto signed i,r;
auto signed short br;
auto signed char lf = (LF);
auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x08);
auto signed const DELAY = (0x03*(QUANTUM));
auto signed short COLS = (72); // default

if(!flag) return(0x00);
if(!sym) return(0x00);

if(cols<(0x01)) cols = (COLS);

b = (0x00);
r = read2_f(&b,sym,fd);
if(!b) {
printf("%s \n","<< Error at fn. read2_f()");
return(0x00);
}
if(!r) {
AND(*flag,(~CLI_ERROR));
if(b) rl(b);
b = (0x00);
return(0x00);
}

AND(br,0x00);
r = rm_br(b);
if(r) OR(br,0x01);
if(!b) {
printf("%s \n","<< Error at fn. rm_br()");
OR(*flag,CLI_IRR);
// return(0x00);
}

if(!(CLI_IRR&(*flag))) {
r = cli_output(DELAY,cols,sym,b);
if(!r) {
OR(*flag,CLI_IRR);
printf("%s \n","<< Error at fn. cli_output()");
// return(0x00);
}}

embed(0x00,b);
if(b) rl(b);
b = (0x00);

if(br) printf("\n");

if(CLI_IRR&(*flag)) return(0x00);

if(OPT_VERBOSE&(*flag)) {
}

return(0x01+(art_r_r(flag,cols,sym,fd)));
}
