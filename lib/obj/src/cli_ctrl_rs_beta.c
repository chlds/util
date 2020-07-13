/*

Press <Ctrl-\> to invoke the function.

Type a bullet (i.e., 0x2022) in UTF-8

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
Along with C and Windows libraries
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_rs_beta(CLI_W32_STAT(*argp))) {

auto signed char *cur,*p;
auto signed c,i,r;
auto signed short flag;

if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-\\>");

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
r = (0x01+(ct(cur)));
r = (r*(sizeof(signed char)));
p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc() ");
return(0x00);
}

*p = (0x00);
r = cpy(p,cur);

// type a bullet in three bytes
*cur = (0xE0|0x02);
cur++;
*cur = (0x80|0x00);
cur++;
*cur = (0x80|0x20|0x02);
cur++;
*cur = (0x00);
r = cpy(cur,p);
embed(0x00/* flag */,p);
free(p);
*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (cur);

r = cli_coord_out_beta(0x00/* wrap */,-0x03+(cur),argp);
if(!p) {
printf("%s\n","<< Error at fn. cli_coord_out_beta() ");
return(0x00);
}

r = cli_refresh_beta(0x00/* forced */,cur,argp);
if(!p) {
printf("%s\n","<< Error at fn. cli_refresh_beta() ");
return(0x00);
}

return(0x01);
}
