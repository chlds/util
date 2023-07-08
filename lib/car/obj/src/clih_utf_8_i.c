# define CAR_H
# include <stdio.h>
# include <windows.h>
# include "./../../../config.h"

signed(__cdecl clih_utf_8_i(void(*argp),signed(__cdecl*f)(void(*argp)))) {
auto signed i;
auto signed r;
i = GetConsoleCP();
if(!i) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetConsoleCP() with error no.",r,"or",r);
return(0x00);
}
r = clih_utf_8_i_r(argp,f);
if(!(SetConsoleCP(i))) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetConsoleCP() with error no.",r,"or",r);
return(0x00);
}
return(r);
}
