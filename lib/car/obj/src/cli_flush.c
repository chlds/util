/*

Output characters based on UTF-8 to the console screen.

Remarks:
Return the number of bytes for output characters (..or the number of output characters).
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_flush(signed short(arg/* align */),rule_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

b = (*(CLI_INDEX+(R(b,*argp))));
if(!b) return(0x00);

r = cli_flush_b(arg,b);
// if(!r) return(0x00);
if(!(cli_es(CTRL_K))) return(0x00);
if(!(cli_es(CTRL_A))) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
if(!b) return(0x00);

r = cli_outs_b(arg,b);
// if(!r) return(0x00);

// return(restore_rules(0x01/* append */,argp));
return(r);
}
