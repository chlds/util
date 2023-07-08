# define CAR_H
# include <stdio.h>
# include <windows.h>
# include "./../../../config.h"

signed(__cdecl clih_utf_8_o(void(*argp),signed(__cdecl*f)(void(*argp)))) {
auto signed o;
auto signed r;
o = GetConsoleOutputCP();
if(!o) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetConsoleOutputCP() with error no.",r,"or",r);
return(0x00);
}
r = clih_utf_8_o_r(argp,f);
if(!(SetConsoleOutputCP(o))) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetConsoleOutputCP() with error no.",r,"or",r);
return(0x00);
}
return(r);
}
