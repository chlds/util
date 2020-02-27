/*

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_eq_eol(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *crlf = ("crlf");

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cmpr_parts(&i,*(CLI_OFFSET+(R(base,R(roll,*argp)))),crlf);
if(!r) {
printf("%s\n","<< Error at fn. cmpr_parts()");
return(0x00);
}

if(!i) R(linebreak_form,*argp) = (LINEBREAK_CRLF);
else R(linebreak_form,*argp) = (LINEBREAK_LF);

return(0x01);
}
