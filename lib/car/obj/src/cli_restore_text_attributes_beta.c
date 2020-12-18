/* **** Notes

Restore

Remarks:
Refer at fn. cli_change_text_attributes_beta.
*/


# define CAR
# include "./../../../incl/config.h"
# include <stdio.h>
# include <windows.h>

signed(__cdecl cli_restore_text_attributes_beta(cli_property_t(*argp))) {

auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(!(CLI_INIT&(R(flag,*argp)))) return(0x00);
if(!(CLI_BACKUP&(R(flag,R(text,*argp))))) return(0x00);

r = SetConsoleTextAttribute(*(CLI_OUT+(R(device,*argp))),R(attribute,R(text,*argp)));
if(!r) return(0x00);

flag = (~CLI_BACKUP);
AND(R(flag,R(text,*argp)),flag);
AND(flag,0x00);

return(0x01);
}
