/* **** Notes

Depth-first searching

Remarks:
If the function fails, the return value is (0x00).
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

# define FILE (0x01)
# define DOT_FILE (0x02)
# define DIR (0x04)
# define DOT_DIR (0x08)
# define CURR_DIR (0x10)
# define P_DIR (0x20)
# define DIRS (P_DIR+(CURR_DIR+(DOT_DIR+(DIR))))
// for signed short(flag)

# define BUFF (0x400)

signed(__cdecl pickfiles(signed char(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(TheNumbreOfTheDirectories);
extern signed(TheNumbreOfTheFiles);

auto signed(attrib[]) = {
(signed) (FILE_ATTRIBUTE_ARCHIVE),
(signed) (FILE_ATTRIBUTE_COMPRESSED),
(signed) (FILE_ATTRIBUTE_DEVICE),
(signed) (FILE_ATTRIBUTE_DIRECTORY),
(signed) (FILE_ATTRIBUTE_ENCRYPTED),
(signed) (FILE_ATTRIBUTE_HIDDEN),
(signed) (FILE_ATTRIBUTE_INTEGRITY_STREAM),
(signed) (FILE_ATTRIBUTE_NORMAL),
(signed) (FILE_ATTRIBUTE_NOT_CONTENT_INDEXED),
(signed) (FILE_ATTRIBUTE_NO_SCRUB_DATA),
(signed) (FILE_ATTRIBUTE_OFFLINE),
(signed) (FILE_ATTRIBUTE_READONLY),
(signed) (FILE_ATTRIBUTE_RECALL_ON_DATA_ACCESS),
(signed) (FILE_ATTRIBUTE_RECALL_ON_OPEN),
(signed) (FILE_ATTRIBUTE_REPARSE_POINT),
(signed) (FILE_ATTRIBUTE_SPARSE_FILE),
(signed) (FILE_ATTRIBUTE_SYSTEM),
(signed) (FILE_ATTRIBUTE_TEMPORARY),
(signed) (FILE_ATTRIBUTE_VIRTUAL),
(signed) (NIL)
};

auto signed char(*(attribp[])) = {
(char signed(*)) ("Archive"),
(char signed(*)) ("Compressed"),
(char signed(*)) ("Device"),
(char signed(*)) ("Directory"),
(char signed(*)) ("Encrypted"),
(char signed(*)) ("Hidden"),
(char signed(*)) ("Integrity stream"),
(char signed(*)) ("Normal"),
(char signed(*)) ("Not content indexed"),
(char signed(*)) ("No scrub data"),
(char signed(*)) ("Offline"),
(char signed(*)) ("Read-only"),
(char signed(*)) ("Recall on data access"),
(char signed(*)) ("Recall on open"),
(char signed(*)) ("Reparse point"),
(char signed(*)) ("Sparse file"),
(char signed(*)) ("System"),
(char signed(*)) ("Temporary"),
(char signed(*)) ("Virtual"),
(char signed(*)) (NIL)
};

auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x08);
auto signed const(DELAY) = (2*(QUANTUM));

auto SYSTEMTIME(st);

auto void(*search);
auto WIN32_FIND_DATA(wfd);

auto signed char(buff[BUFF]);
// auto signed char(*p);

auto signed(dif);
auto signed(i), (l), (r);
auto signed short(flag);

/* **** CODE/TEXT */
printf("\n");
printf("%s", argp);

/* **** opendir */
search = (void(*)) FindFirstFile(argp, &wfd);

if(!((signed long long) INVALID_HANDLE_VALUE^(signed long long) (search))) {
r = GetLastError();
printf("%s%Xh\n", "<< Error at fn. FindFirstFile() with the last error no. ", r);
if(!(r^(ERROR_FILE_NOT_FOUND))) printf("%s\n", "No matching files.");
printf("%s%s\n", "argp is: ", argp);
return(0x00);
}

// else printf("%s%p\n", "The search handle is: ", search);

r = ct(argp);
*(argp+(r+(~(0x00)))) = (0x00);
// printf("%s%s\n", "crafted argp is: ", argp);

/* readdir */
XOR(l, l);

while(1) {

if(l<(SNOOZE)) {
l++;
}
else {
XOR(l, l);
Sleep(DELAY);
}

printf("\n");

flag = (signed short) dir_or_file(&wfd);

if(flag&(DOT_DIR|(DIR))) {
// Going to recur
sprintf(buff, "%s%s%s", argp, wfd.cFileName, "/*");
// printf("%s%s\n", "concatenated buff is: ", buff);
r = pickfiles(buff);
/* Pay attention to handling of the return value. */
if(!r) {
}
else {
}
// Being gone back to the previous directory.
printf("\n");
printf("%s\n", argp);
}

if(flag&(DIRS)) {
// Output a directory
printf("%s%s%s", " d ", wfd.cFileName, "/");
TheNumbreOfTheDirectories++;
}

else {
// Or output a file
printf("%s%s", " - ", wfd.cFileName);
TheNumbreOfTheFiles++;
}

// Output the file attributes
XOR(i, i);
while(*(attrib+(i))) {
if(wfd.dwFileAttributes&(*(attrib+(i)))) {
printf("%s%s", "  ", *(attribp+(i)));
}
i++;
}

/* Find the next file */
r = FindNextFile(search, &wfd);

if(!r) {
r = GetLastError();
if(r^(ERROR_NO_MORE_FILES)) printf("%s%Xh\n", "<< Error at fn. FindNextFile() with the last error no. ", r);
break;
}}


/* closedir */
r = FindClose(search);

if(!r) {
r = GetLastError();
printf("%s%Xh\n", "<< Error at fn. FindClose() with last error no. ", r);
return(0x00);
}

return(0x01);
}
