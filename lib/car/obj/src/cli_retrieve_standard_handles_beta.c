/* **** Notes

Retrieve
*/


# define CAR
# include "./../../../incl/config.h"
# include <stdio.h>
# include <windows.h>

signed(__cdecl cli_retrieve_standard_handles_beta(void(**argp))) {

auto signed param[] = {
STD_INPUT_HANDLE,
STD_OUTPUT_HANDLE,
STD_ERROR_HANDLE,
0x00,
};

auto signed i,r;

if(!argp) return(0x00);

i = (CLI_OBJS);
*(--i+(argp)) = (0x00);
while(i) {
*(i+(argp)) = (void*) GetStdHandle(*(--i+(param)));
if(DBG) printf("[%p] \n",*(i+(argp)));
if(!(*(i+(argp)))) return(0x00);
if(EQ(INVALID_HANDLE_VALUE,*(i+(argp)))) return(0x00);
}

return(0x01);
}
