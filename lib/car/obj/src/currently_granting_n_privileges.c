/*

Retrieve the number of privileges.

Remarks:
Refer at fn. currently_granting_privileges and currently_granting_token_privileges.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl currently_granting_n_privileges(void(*argp/* structure token privileges */))) {

auto signed char *b;
auto TOKEN_PRIVILEGES *priv;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

priv = (TOKEN_PRIVILEGES(*)) (argp);
r = (R(PrivilegeCount,*priv));
priv = (0x00);

return(r);
}
