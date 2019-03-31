/* **** Notes

Depth-first searching

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


char signed(__cdecl readdirectory2(DIR_INFO_STORED(*argp))) {

/* **** **** DATA */
extern int signed(TheNumbreOfTheDirectories);
extern int signed(TheNumbreOfTheFiles);

enum {
SI, DI, CACHE
};

static int signed(attrib[]) = {
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

static char signed(*(attribp[])) = {
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

auto char signed const(CURRENT_DIRECTORY) = ('.');

auto WIN32_FIND_DATA(wfd);

auto char signed(craft[BUFF]);
auto char signed(buff[BUFF]);

auto char signed(*p);

auto SYSTEMTIME(st);

auto int signed(i), (l), (r);
auto short signed(attrib_flag) = (0x01);
auto short signed(flag);
auto char signed(c);

auto DIR_INFO_STORED(dis);

/* **** **** CODE/TEXT */
if(!argp) return(NIL);
if(!((*argp).search)) return(NIL);
if(!((*argp).parent_dir)) return(NIL);

/* Monitor
printf("%s%p\n", ("argp (i.e., of data type (DIR_INFO_STORED*)) is: "), (argp));
printf("%s%p\n", ("(*argp).search is: "), (*argp).search);
printf("%s%p\n", ("(*argp).parent_dir is: "), (*argp).parent_dir);
printf("%s%s\n", ("(*argp).parent_dir is: "), (*argp).parent_dir);
//*/

XOR(flag, flag);
p = (char signed(*)) ((*argp).wfd.cFileName);

/* Monitor
printf("%s%p\n", ("(*argp).wfd.cFileName is: "), (*argp).wfd.cFileName);
printf("%s%s\n", ("(*argp).wfd.cFileName is: "), (*argp).wfd.cFileName);
printf("%s%p\n", ("p is: "), (p));
printf("%s%s\n", ("p is: "), (p));
//*/

// Directory Check!
if(FILE_ATTRIBUTE_DIRECTORY&((*argp).wfd.dwFileAttributes)) {

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
// call after crafting the parent path
c = cp_lett(&i, (craft), (*argp).parent_dir);
(*(craft+(i+(~(NIL))))) = (NIL);
sprintf(buff, ("%s%s%s"), (craft), (p), ("/*"));
searchdirectory2(buff);
printf("\n");
printf("%s\n", (*argp).parent_dir);
}

if(!flag) {
// call after crafting the parent path
c = cp_lett(&i, (craft), (*argp).parent_dir);
(*(craft+(i+(~(NIL))))) = (NIL);
sprintf(buff, ("%s%s%s"), (craft), (p), ("/*"));
searchdirectory2(buff);
printf("\n");
printf("%s\n", (*argp).parent_dir);
}

// Output a directory name
printf("%s", (" d "));
printf("%s", (p));
(TheNumbreOfTheDirectories++);
/* Check the attributes of a directory or of a file */
if(attrib_flag) c = attributes_of((*argp).wfd.dwFileAttributes, (attrib), (attribp));
}

else {
// Output a file name
printf("%s", (" - "));
printf("%s", (p));
(TheNumbreOfTheFiles++);
/* Check the attributes of a directory or of a file */
if(attrib_flag) c = attributes_of((*argp).wfd.dwFileAttributes, (attrib), (attribp));
}

/* To go to the next step */
printf("\n");

/* Update the search handle */
r = FindNextFile((*argp).search, (&(dis.wfd)));

if(!r) {
r = GetLastError();
if(r^(ERROR_NO_MORE_FILES)) printf("%s%Xh\n", ("Error at fn. FindNextFile(). with error no. "), (r));
return(1);
}

// Setting
dis.search = (*argp).search;
dis.parent_dir = (*argp).parent_dir;

return (1+(readdirectory2(&dis)));
}
