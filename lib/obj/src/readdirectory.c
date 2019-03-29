/* **** Notes

Depth-first searching

*/


# define C_CODE_STDS
# define C_AS

# include "./../../../incl/config.h"
# include <windows.h>

# define BUFF (0x400)
# define N (0x03)


char signed(__cdecl readdirectory(void(*cache), WIN32_FIND_DATA(*di), char signed(*si))) {

/* **** **** DATA */
extern int signed(TheNumbreOfTheDirectories);
extern int signed(TheNumbreOfTheFiles);

enum {
SI, DI, CACHE
};

auto int signed(attrib[]) = {
(int signed) (FILE_ATTRIBUTE_ARCHIVE),
(int signed) (FILE_ATTRIBUTE_COMPRESSED),
(int signed) (FILE_ATTRIBUTE_DEVICE),
(int signed) (FILE_ATTRIBUTE_DIRECTORY),
(int signed) (FILE_ATTRIBUTE_ENCRYPTED),
(int signed) (FILE_ATTRIBUTE_HIDDEN),
(int signed) (FILE_ATTRIBUTE_INTEGRITY_STREAM),
(int signed) (FILE_ATTRIBUTE_NORMAL),
(int signed) (FILE_ATTRIBUTE_NOT_CONTENT_INDEXED),
(int signed) (FILE_ATTRIBUTE_NO_SCRUB_DATA),
(int signed) (FILE_ATTRIBUTE_OFFLINE),
(int signed) (FILE_ATTRIBUTE_READONLY),
(int signed) (FILE_ATTRIBUTE_RECALL_ON_DATA_ACCESS),
(int signed) (FILE_ATTRIBUTE_RECALL_ON_OPEN),
(int signed) (FILE_ATTRIBUTE_REPARSE_POINT),
(int signed) (FILE_ATTRIBUTE_SPARSE_FILE),
(int signed) (FILE_ATTRIBUTE_SYSTEM),
(int signed) (FILE_ATTRIBUTE_TEMPORARY),
(int signed) (FILE_ATTRIBUTE_VIRTUAL),
(int signed) (NIL)
};

auto char signed(*(attribp[])) = {
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

auto int signed const(QUANTUM) = (0x10);
auto int signed const(SNOOZE) = (0x08);
auto int signed const(DELAY) = (0x02*(QUANTUM));

auto char signed const(CURRENT_DIRECTORY) = ('.');

auto WIN32_FIND_DATA(wfd);

auto void(*(search[N]));

auto char signed(craft[BUFF]);
auto char signed(buff[BUFF]);

auto char signed(*p);

auto SYSTEMTIME(st);

auto int signed(i), (l), (r);
auto short signed(flag);
auto char signed(c);

/* **** **** CODE/TEXT */
if(!cache) return(NIL);
if(!di) return(NIL);
if(!si) return(NIL);

/* Monitor
printf("%s%p\n", ("cache is: "), (cache));
printf("%s%p\n", ("di is: "), (di));
printf("%s%s\n", ("(*di).cFileName is: "), (*di).cFileName);
printf("%s%p\n", ("si is: "), (si));
printf("%s%s\n", ("si is: "), (si));
//*/

XOR(flag, flag);
p = ((*di).cFileName);

// Directory Check!
if(FILE_ATTRIBUTE_DIRECTORY&((*di).dwFileAttributes)) {

if(!(CURRENT_DIRECTORY^(*(p+(NIL))))) OR(flag, 0x01);

if(flag) {
if(!(CURRENT_DIRECTORY^(*(p+(1))))) {
if(!(*(p+(2)))) (flag++);
}}

if(flag) {
if(!(*(p+(1)))) (flag++);
}

/* Commentary
flag 0: directories
flag 1: hidden directories
flag 2: the current directory or the parent directory
//*/

if(!(flag^(0x02))) {
}

if(!(flag^(0x01))) {
// call after crafting the (si) path
c = cp_lett(&i, (craft), (si));
(*(craft+(i+(~(NIL))))) = (NIL);
sprintf(buff, ("%s%s%s"), (craft), (p), ("/*"));
searchdirectory(buff);
printf("\n");
printf("%s\n", (si));
}

if(!flag) {
// call after crafting the (si) path
c = cp_lett(&i, (craft), (si));
(*(craft+(i+(~(NIL))))) = (NIL);
sprintf(buff, ("%s%s%s"), (craft), (p), ("/*"));
searchdirectory(buff);
printf("\n");
printf("%s\n", (si));
}

// Output a directory name
printf("%s", (" d "));
printf("%s\n", (*di).cFileName);
(TheNumbreOfTheDirectories++);
}

else {
// Output a file name
printf("%s", (" - "));
printf("%s\n", (*di).cFileName);
(TheNumbreOfTheFiles++);
}

/* Update the search handle */
r = FindNextFile(cache, (&wfd));

if(!r) {
r = GetLastError();
if(r^(ERROR_NO_MORE_FILES)) printf("%s%Xh\n", ("Error at fn. FindNextFile(). with error no. "), (r));
return(1);
}

return (1+(readdirectory(cache, (&wfd), (si))));
}
