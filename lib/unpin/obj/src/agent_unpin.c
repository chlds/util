/* **** Notes

Unpin it to your clipboard.
*/


# define UNPIN_H
# include "./../../../config.h"

signed(__cdecl agent_unpin(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed r;
auto signed short flag;

if(0x01<(argc)) return(unpin_help());

return(unpin_b());
}
