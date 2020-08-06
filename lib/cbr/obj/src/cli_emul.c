/* **** Notes

Backup or restore parameters associated with workspace.

Along with C library

Remarks:
Refer at fn. cli_init_ty, cli_spool_beta and fn. cli_io_beta.
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_emul(signed short(emul),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!emul) {
// backup
R(flag,R(emul,*argp)) = (R(flag,*argp));
R(offset,R(emul,*argp)) = (R(offset,*argp));
R(gauge,R(emul,*argp)) = (R(gauge,*argp));
i = (CLI_OBJS);
while(i) {
--i;
*(i+(R(append,R(emul,*argp)))) = (*(i+(R(append,*argp))));
}
i = (CLI_OBJS);
while(i) {
--i;
*(i+(R(cur,R(emul,*argp)))) = (*(i+(R(cur,*argp))));
}}

else {
// restore
R(flag,*argp) = (R(flag,R(emul,*argp)));
R(offset,*argp) = (R(offset,R(emul,*argp)));
R(gauge,*argp) = (R(gauge,R(emul,*argp)));
i = (CLI_OBJS);
while(i) {
--i;
*(i+(R(append,*argp))) = (*(i+(R(append,R(emul,*argp)))));
}
i = (CLI_OBJS);
while(i) {
--i;
*(i+(R(cur,*argp))) = (*(i+(R(cur,R(emul,*argp)))));
}}

return(0x01);
}
