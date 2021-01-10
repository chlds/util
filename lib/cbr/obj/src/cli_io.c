/* **** Notes

Output characters in UTF-8 after decoding Unicode bytes input out of the key board.

Remarks:
Based on UTF-8
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_io(signed(size),signed char(*cur),CLI_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const LIMIT = (0x01+(0x04));
auto signed DEL = (0x7F);

auto signed char *b;
auto signed char *p;
auto signed dif;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

if(!(LIMIT<(size))) {
*cur = (0x00);
return(0x00);
}

// get
r = cli_in(&i,cur,size);
if(!r) {
printf("%s \n","<< Error at fn. cli_in()");
return(0x00);
}

dif = (r);
*(dif+(cur)) = (0x00);

if(!(DEL^(i))) i = (CTRL_D);
if(i<(0x20)) {
// fix
AND(dif,0x00);
*(dif+(cur)) = (signed char) (0x00);
r = cli_ctrl_fn(i,&cur,&size,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_ctrl_fn()");
return(0x00);
}
if(CLI_BR&(R(flag,R(ty,*argp)))) return(0x01);
}

else {
// put
size = (-dif+(size));
r = cli_out(cur);
if(!r) {
printf("%s \n","<< Error at fn. cli_out()");
return(0x00);
}}

cur = (dif+(cur));

return(0x01+(cli_io(size,cur,argp)));
}
