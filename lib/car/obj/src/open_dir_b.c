/* **** Notes

Map.
*/


# define CAR
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl open_dir_b(signed char(*path),void(*argp))) {

auto void *v;

if(!path) return(0x00);
if(!argp) return(0x00);

v = (void(*)) FindFirstFile(path,argp);
if(EQ(INVALID_HANDLE_VALUE,v)) v = (0x00);

return(v);
}
