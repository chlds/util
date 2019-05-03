/* **** Notes

Depth-first searching

Make a structure to measure a part of code that overflows
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

# define BUFF (0x300)
# define N (0x03)

//* To measure a part of code that overflows
struct dir_info_stored {
void(*search);
WIN32_FIND_DATA(wfd);
char signed(*parent_dir);
} typedef DIR_INFO_STORED;
//*/

signed(__cdecl open2dir(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto WIN32_FIND_DATA(wfd);
auto void(*search);

auto SYSTEMTIME(st);

auto DIR_INFO_STORED(dis);
auto signed char(buff[BUFF]);
auto signed char(*p);
auto signed(r);
auto signed short(flag);

/* **** CODE/TEXT */
printf("\n");
printf("%s\n", (argp));

Sleep(DELAY);

dis.parent_dir = (argp);

/* Open(, map, store or..) on the RAM */
dis.search = (void(*)) FindFirstFile(argp, &(dis.wfd));

if(!((signed long long) INVALID_HANDLE_VALUE^((signed long long) dis.search))) {
if(!(ERROR_NO_MORE_FILES^(r = GetLastError()))) return(0x00);
else {
printf("%s", ("<< Error at fn. FindFirstFile()."));
printf("%s%Xh\n", (" with error no. "), (GetLastError()));
// Monitor
printf("%s%s\n", ("and the dis.parent_dir: "), (dis.parent_dir));
printf("%s%s\n", ("and the argp: "), (argp));
return(0x00);
}}
// else printf("%s%p\n", ("The search handle is: "), (search));

r = read2dir(&dis);

printf("%s%d\n", "Count: ", r);

r = FindClose(dis.search);

if(!r) {
printf("%s", ("<< Error at fn. FindClose()."));
printf("%s%Xh\n", (" with error no. "), (GetLastError()));
return(0x00);
}

return(0x01);
}
