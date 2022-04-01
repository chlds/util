/* **** Notes

Map.
*/


# define CAR
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl open_dir_b(signed short(flag/* verbose */),signed char(*path),void(*argp))) {

auto signed char *b;
auto void *v;
auto signed r;

if(!path) return(0x00);
if(!argp) return(0x00);

v = (void(*)) FindFirstFile(path,argp);
if(EQ(INVALID_HANDLE_VALUE,v)) {
r = currently_occurring_error();
v = (0x00);
if(flag) {
b = (0x00);
if(EQ(ERROR_FILE_NOT_FOUND,r)) b = ("No matching files");
if(EQ(ERROR_ACCESS_DENIED,r)) b = ("Denied");
if(b) printf("[%s] \n",b);
else printf("%s %Xh \n","<< Error at fn. FindFirstFile() with error no.",r);
}}

return(v);
}
