/* **** Notes

Depth-first searching

Make a structure to measure a part of code to overflow a stack

*/

# define C_CODE_STDS
# define C_AS

# include "./../../../incl/config.h"
# include <windows.h>

# define BUFF (0x300)
# define N (0x03)

//* To measure a part of code to overflow a stack frame
struct dir_info_stored {
void(*search);
WIN32_FIND_DATA(wfd);
char signed(*parent_dir);
} typedef DIR_INFO_STORED;
//*/


char signed(__cdecl searchdirectory2(char signed(*argp))) {

/* **** **** DATA */
auto int signed const(QUANTUM) = (0x10);
auto int signed const(SNOOZE) = (0x08);
auto int signed const(DELAY) = (0x02*(QUANTUM));

auto WIN32_FIND_DATA(wfd);

auto void(*search);

auto SYSTEMTIME(st);

auto char signed(buff[BUFF]);

auto char signed(*p);

auto int signed(i), (l), (r);
auto short signed(flag);
auto char signed(c);

auto DIR_INFO_STORED(dis);

/* **** **** CODE/TEXT */
printf("\n");
printf("%s\n", (argp));

Sleep(DELAY);

dis.parent_dir = (argp);

dis.search = (void(*)) FindFirstFile(argp, (&(dis.wfd)));

if(!((int long long) INVALID_HANDLE_VALUE^((int long long) dis.search))) {
if(!(ERROR_NO_MORE_FILES^(r = GetLastError()))) return(NIL);
else {
printf("%s", ("<< Error at fn. FindFirstFile()."));
printf("%s%Xh\n", ("with error no. "), (GetLastError()));
return(NIL);
}}

// else printf("%s%p\n", ("The search handle is: "), (search));

c = readdirectory2(&dis);

printf("%s%d\n", ("Count: "), (c));

r = (int signed) FindClose(dis.search);

if(!(r)) {
printf("%s", ("<< Error at fn. FindClose()."));
printf("%s%Xh\n", ("with error no. "), (GetLastError()));
return(NIL);
}

return(XOR(c, c));
}
