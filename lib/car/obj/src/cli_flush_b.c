/* **** Notes

Flush.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_flush_b(signed short(arg/* align */),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(0x08<(arg)) return(0x00);
if(!argp) return(0x00);

r = cli_outs_b(arg,argp);
if(!r) {
/*
printf("%s \n","<< Error at fn. cli_outs_b()");
return(0x00);
//*/
}

return(embed(0x00,argp));
}
