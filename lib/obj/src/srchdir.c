/* **** Notes

Depth-first searching

*/

# define C_CODE_STDS
# define C_AS

# include "./../../../incl/config.h"
# include <windows.h>

# define BUFF (0x400)
# define N (0x03)


char signed(__cdecl srchdir(char signed(*argp))) {

/* **** **** DATA */
auto WIN32_FIND_DATA(wfd);

auto void(*search);

auto SYSTEMTIME(st);

auto char signed(buff[BUFF]);

auto char signed(*p);

auto int signed(i), (l), (r);
auto short signed(flag);
auto char signed(c);


/* **** **** CODE/TEXT */
search = (void(*)) FindFirstFile(argp, (&wfd));

if(!((int long long) INVALID_HANDLE_VALUE^((int long long) search))) {
if(!(ERROR_NO_MORE_FILES^(r = GetLastError()))) return(NIL);
else {
printf("%s\n", ("<< Error at fn. FindFirstFile()."));
return(NIL);
}}

// else printf("%s%p\n", ("The search handle is: "), (search));

c = rddir(search, (&wfd));

printf("%s%d\n", ("Count: "), (c));

r = (int signed) FindClose(search);

if(!(r)) {
printf("%s", ("<< Error at fn. FindClose()."));
printf("%s%Xh\n", ("with error no. "), (GetLastError()));
return(NIL);
}

return(XOR(c, c));
}
