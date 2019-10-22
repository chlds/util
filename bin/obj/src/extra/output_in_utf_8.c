/* To output in UTF-8

Save files in UTF-8, define _UNICODE, include <tchar.h>, auto TCHAR *p = (L"...."), fn. _putwch/_puttch and more..

> cl -c -source-charset:utf-8 t.c
> cl -c -source-charset:utf-8 output_in_utf_8.c
> link t.obj output_in_utf_8.obj
> t(.exe)
*/


# define _UNICODE

# include <stdio.h>
# include <stdlib.h>
# include <tchar.h>

signed(__cdecl output_in_utf_8(TCHAR(*argp))) {

auto signed i,r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = _putwch(*argp);

if(!(WEOF^(r))) {
printf("%s\n", "Oops..");
return(0x00);
}

argp++;

return(0x01+(output_in_utf_8(argp)));
}
