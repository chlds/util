/* **** Notes

Store bytes

Remarks:
Code of line break: CRLF, LF or (0x00)
Create, append or truncate
*/


# define CAR_H
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl str_b(signed(arg/* code of line break */),signed char(*perm),signed char(*di/* path */),signed char(*si/* contents */))) {
auto signed char *(a[OBJS]);
auto signed char *b;
auto void *argp;
auto signed char *crlf = ("\r\n");
auto signed char *lf = ("\n");
auto signed(__cdecl*f)(signed(arg),void(*argp));
// e.g., auto signed char *perm = ("creat,excl,append,trunc,rdwr,rdonly,wronly,binary,text,iread,iwrite");
if(!perm) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
b = (0x00);
if(arg) {
b = (lf);
if(!(EQ(LF,arg))) b = (crlf);
}
*(CLI_D+(a)) = (0x00);
*(CLI_W+(a)) = (b);
*(CLI_B+(a)) = (si);
argp = (void*) (a);
f = (str_b_r);
return(xt(perm,di,argp,f));
}
