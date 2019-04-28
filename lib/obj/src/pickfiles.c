/* **** Notes

Depth-first searching

Remarks:
If the function fails, the return value is (0x00).
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

# define BUFF (0x400)
# define N (0x03)

signed(__cdecl pickfiles(signed char(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(TheNumbreOfTheDirectories);
extern signed(TheNumbreOfTheFiles);

enum {
SI, DI, CACHE
};

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
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (2*(QUANTUM));
// in milli-seconds

auto WIN32_FIND_DATA(wfd);

auto void(*(search[N]));

auto SYSTEMTIME(st);

auto signed char(buff[BUFF]);
auto signed char(*p);

auto signed(i), (l), (r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
printf("\n");
printf("%s", argp);

/* **** opendir */
*(search+(SI)) = (void(*)) FindFirstFile(argp, (&wfd));

if(!((signed long long) INVALID_HANDLE_VALUE^(signed long long) (*(search+(SI))))) {
if(!(ERROR_NO_MORE_FILES^(r = GetLastError()))) {
}
else {
printf("%s", "<< Error at fn. FindFirstFile().");
printf("%s%Xh\n", (" and the last error number is: "), (r));
printf("%s%s\n", ("and the argp is: "), (argp));
return(0x00);
}}

else {
// printf("%s%p\n", "The search handle is: ", *(search+(SI)));
}


i = ct(argp);
*(argp+(i+(~(NIL)))) = (signed char) (0x00);
// printf("%s%s\n", ("The crafted argp is: "), (argp));

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

if(wfd.dwFileAttributes&(FILE_ATTRIBUTE_DIRECTORY)) {

c = cmp_lett(&i, "..", wfd.cFileName);
if(!i) {
}
else {
c = cmp_lett(&i, ".", wfd.cFileName);
if(!i) {
}
else {
// To the recursion
sprintf(buff, "%s%s%s", argp, wfd.cFileName, "/*");
// Monitoring
// printf("%s%s\n", "The buff is: ", buff);
r = pickfiles(buff);
if(!r) return(0x00);
printf("\n");
printf("%s\n", argp);
}}

// Output a directory
printf("%s%s%s", " d ", wfd.cFileName, "/");
TheNumbreOfTheDirectories++;
}

// Or output a file
else {
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
r = FindNextFile(*(search+(SI)), &wfd);

if(!r) {
if(!(ERROR_NO_MORE_FILES^(r = GetLastError()))) {
break;
}
else {
printf("%s", "<< Error at fn. FindNextFile().");
printf("%s%Xh\n", " and the last error number is: ", r);
break;
}}}


/* closedir */
r = FindClose(*(search+(SI)));

if(!r) {
printf("%s", "<< Error at fn. FindClose().");
printf("%s%Xh\n", (" and the last error number is: "), (GetLastError()));
return(0x00);
}
else {
/*
printf("\n");
printf("%s\n", ("Successfully closed."));
//*/
}

printf("\n");

return(0x01);
}
