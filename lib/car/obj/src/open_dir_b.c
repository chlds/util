/* **** Notes

Map.
*/


# define CAR
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl open_dir_b(signed char(*path),void(*argp))) {

auto void *v;
auto signed r;

if(!path) return(0x00);
if(!argp) return(0x00);

v = (void(*)) FindFirstFile(path,argp);
if(EQ(INVALID_HANDLE_VALUE,v)) {
r = currently_occurring_error();
printf("%s %Xh \n","<< Error at fn. FindFirstFile() with error no.",r);
if(!(r^(ERROR_FILE_NOT_FOUND))) printf("%s \n","No matching files can be found.");
v = (0x00);
}

return(v);
}
