/* **** Notes

Output in column articles.

Remarks:
A character string should be terminated with the null character.
Refer at fn. cv_ww, fn. read_b and fn. rm_crlf to replace CR/LF with the null character.
Return the number of rows output for characters (..or the number of characters).
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cals_output(signed(arg/* delay */),signed short(colors),signed short(cols),signed char(*sym),signed char(*argp))) {

static signed char lf = (LF);
auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x08);
auto signed const DELAY = (0x03*(QUANTUM));
auto signed short COLS = (72); // default
auto signed char **v;
auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!sym) return(0x00);
if(!argp) return(0x00);

if(cols<(0x01)) cols = (COLS);

v = (0x00);
r = cv_ww(cols,&v,sym,argp);
if(!v) {
printf("%s \n","<< Error at fn. cv_ww()");
return(0x00);
}

AND(flag,0x00);
r = cals_outv_legible(arg,colors,v);
if(!r) {
OR(flag,CLI_IRR);
printf("%s \n","<< Error at fn. cals_outv_legible()");
// return(0x00);
}

if(v) r = rl_v(&v);
if(!r) {
printf("%s \n","<< Error at fn. rl_v()");
return(0x00);
}

if(CLI_IRR&(flag)) AND(r,0x00);

return(r);
}
