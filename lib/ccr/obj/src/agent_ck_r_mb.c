/* **** Notes

Agent.
*/


# define CCR
# include <stdio.h>
# include <windows.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_ck_r_mb(void(*inst),void(*prev_inst),signed char(**argv),signed(cmdshow))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

message_box_mb_ok(0x00,"Ck","Ck");

return(0x01);
}
