/* **** Notes

Depth-first searching

Make a structure to measure a part of code that overflows
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

//* To measure a part of code that overflows
struct dir_info_stored {
void(*search);
char signed(*parent_dir);
WIN32_FIND_DATA(wfd);
} typedef DIR_INFO_STORED;
//*/

signed(__cdecl open2dir(signed short(cmdln_flag), signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto SYSTEMTIME(st);

auto DIR_INFO_STORED(dis);
/* as a substitute/alternative for
auto void(*search);
auto signed char(*parent_dir);
auto WIN32_FIND_DATA(wfd);
//*/

auto signed(r);

/* **** CODE/TEXT */
printf("\n");
printf("%s\n", argp);

Sleep(DELAY);

dis.parent_dir = (argp);

/* Open(, map, store or..) on the RAM */
dis.search = (void(*)) FindFirstFile(argp, &(dis.wfd));

if(!((signed long long) INVALID_HANDLE_VALUE^((signed long long) dis.search))) {
r = GetLastError();
printf("%s%Xh\n", "<< Error at fn. FindFirstFile() with error no. ", r);
if(!(r^(ERROR_FILE_NOT_FOUND))) printf("%s\n", "No matching files can be found.");
//* Monitoring
printf("%s%s\n", "and the dis.parent_dir: ", dis.parent_dir);
printf("%s%s\n", "and the argp: ", argp);
//*/
return(0x00);
}
// else printf("%s%p\n", "The search handle is: ", dis.search);

r = read2dir(cmdln_flag, &dis);

if(!r) {
}

else {
}

printf("%s%d%s%s\n", " ", r, " dir/files read on ", argp);

r = FindClose(dis.search);

if(!r) {
r = GetLastError();
printf("%s%Xh\n", "<< Error at fn. FindClose() with error no. ", r);
return(0x00);
}

return(0x01);
}
