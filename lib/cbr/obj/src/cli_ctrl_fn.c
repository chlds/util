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

signed(__cdecl cli_ctrl_fn(signed(arg),signed char(**cur),signed(*size),CLI_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const LIMIT = (0x01+(0x04));
auto signed DEL = (0x7F);

auto signed char *b;
auto signed char *p;
auto signed dif;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!(arg^(DEL))) arg = (CTRL_D);
if(!(arg<(0x20))) return(0x00);
if(!cur) return(0x00);
if(!size) return(0x00);
if(!argp) return(0x00);

if(!(*cur)) return(0x00);
if(!(LIMIT<(*size))) {
**cur = (0x00);
return(0x00);
}

// fix
AND(dif,0x00);
*(dif+(*cur)) = (signed char) (0x00);
*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (*cur);
R(gauge,R(ty,*argp)) = (*size);
r = cli_ctrl_fn_internal(arg,argp);
if(!r) {
printf("%s%d%s \n","<< Error at fn. cli_ctrl_fn_internal(",arg,",argp)");
return(0x00);
}

*size = (R(gauge,R(ty,*argp)));
*cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

// if(CLI_BR&(R(flag,R(ty,*argp)))) return(0x01);

return(r);
}
