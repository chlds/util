# define CAR_H
# include <stdio.h>
# include <windows.h>
# include "./../../../config.h"

signed(__cdecl clih_utf_8_i_r(void(*argp),signed(__cdecl*f)(void(*argp)))) {
auto signed r;
auto signed utf_8 = (65001);
if(!(SetConsoleCP(utf_8))) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetConsoleCP() with error no.",r,"or",r);
return(0x00);
}
return(clih_utf_8_rr(argp,f));
}
