/*

Along with C library

Remarks:
Refer at util/lib/obj/src/cli_parse.c
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_eq_eol(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *crlf = ("crlf");
auto signed char *lf = ("lf");

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cmpr_parts(&i,*(CLI_OFFSET+(R(base,R(roll,*argp)))),lf);
if(!r) {
printf("%s\n","<< Error at fn. cmpr_parts()");
return(0x00);
}

if(!i) R(linebreak_form,R(config,*argp)) = (LINEBREAK_LF);
else R(linebreak_form,R(config,*argp)) = (LINEBREAK_CRLF);

r = cmpr_parts(&i,*(CLI_OFFSET+(R(base,R(roll,*argp)))),crlf);
if(!r) {
printf("%s\n","<< Error at fn. cmpr_parts()");
return(0x00);
}

if(!i) R(linebreak_form,R(config,*argp)) = (LINEBREAK_CRLF);

return(0x01);
}
