/* **** Notes

Along with C and Windows libraries

Remarks:
Build a doubly linked list
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_kb(ty_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto coord_t coord;
auto rect_t rect;

if(!argp) return(0x00);

flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) return(0x00);
if(CLI_QUIT&(flag)) return(0x01);
if(CLI_PBR&(flag)) return(0x01);
if(CLI_BR&(flag)) return(0x01);

r = cli_kb_r(argp);
if(!r) {
r = cli_message(r,"<< Error at fn. cli_kb_r() \n");
return(0x00);
}

/*
r = clear_rows(0x00);
if(!r) {
r = cli_message(r,"<< Error at fn. clear_rows() \n");
return(0x00);
}
//*/

return(0x01);
}
