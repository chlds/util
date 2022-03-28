/* **** Notes

Read.

Remarks:
Refer at fn. rddir.
*/


# define CAR
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl read_dir_b(void(*cache/* search */),void(*argp))) {

auto signed r;

if(!cache) return(0x00);
if(!argp) return(0x00);

r = FindNextFile(cache,argp);
if(!(r^(~0x00))) DEC(r);
if(!r) {
r = currently_occurring_error();
if(EQ(ERROR_NO_MORE_FILES,r)) return(~0x00);
printf("%s %Xh \n","<< Error at fn. FindNextFile() with error no.",r);
AND(r,0x00);
}

return(r);
}
