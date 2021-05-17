/*

Along with C library

Remarks:
Refer at util/lib/obj/src/cli_parse.c
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_eq_eol(CLI_TYPEWRITER(*argp))) {

auto signed char *crlf = ("crlf");
auto signed char *lf = ("lf");

auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

r = cmpr_part(&i,*(CLI_OFFSET+(R(base,R(roll,*argp)))),lf);
if(!i) R(linebreak_form,R(config,*argp)) = (LINEBREAK_LF);
else R(linebreak_form,R(config,*argp)) = (LINEBREAK_CRLF);

r = cmpr_part(&i,*(CLI_OFFSET+(R(base,R(roll,*argp)))),crlf);
if(!i) R(linebreak_form,R(config,*argp)) = (LINEBREAK_CRLF);

return(0x01);
}
