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

signed(__cdecl main(void)) {

auto signed i,r;
auto TCHAR *p = (L"Ça va! (output in UNICODE)");

r = output_in_utf_8(p);

if(!r) printf("%s\n", "Oops..");

printf("\n");

return(0x01);
}
