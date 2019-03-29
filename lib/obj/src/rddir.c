/* **** Notes

Depth-first searching

*/


# define C_CODE_STDS
# define C_AS

# include "./../../../incl/config.h"
# include <windows.h>

# define BUFF (0x400)
# define N (0x03)


char signed(__cdecl rddir(void(*di), WIN32_FIND_DATA(*si))) {

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

auto WIN32_FIND_DATA(wfd);

auto void(*(search[N]));

auto SYSTEMTIME(st);

auto int signed(i), (l), (r);
auto short signed(flag);
auto char signed(c);

/* **** **** CODE/TEXT */
if(!di) return(NIL);
if(!si) return(NIL);

/* Monitor
printf("%s%p\n", ("di is: "), (di));
printf("%s%p\n", ("si is: "), (si));
printf("%s%s\n", ("si is: "), (*si).cFileName);
//*/

printf("%s\n", (*si).cFileName);
r = FindNextFile(di, (&wfd));
if(!r) return(1);

return (1+(rddir(di, (&wfd))));
}
