/*

Set CLI_IN to get the current cursor position or CLI_OUT to set the cursor position at argument io.

Remarks:
Only in the Virtual Terminal
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl coord_b(signed(io),signed(arg),coord_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

if(!(io^(CLI_IN))) return(coord_report(arg,argp));
if(!(io^(CLI_OUT))) return(coord_b_r(arg,argp));

return(0x00);
}
