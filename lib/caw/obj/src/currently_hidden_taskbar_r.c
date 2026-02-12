# define CAR_H
# define CAT_H
# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_hidden_taskbar_r(void(*argp))) {
auto signed char a[CCLVI];
auto signed f = (GA_ROOT);
auto signed char s[] = ("Shell_TrayWnd");
auto signed char p[] = ("Progman");
if(!argp) return(0x00);
argp = GetAncestor(argp,f);
if(!argp) return(0x00);
*a = (0x00);
GetClassName(argp,a,CCLVI);
if(!(cmpe(p,a))) return(0x00);
// if(!(cmpe(s,a))) return(0x00);
return(0x01);
}
