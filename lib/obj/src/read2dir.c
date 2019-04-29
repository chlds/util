/* **** Notes

Depth-first searching
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

# define BUFF (0x300)
# define N (0x03)

# define FILE (0x01)
# define DOT_FILE (0x02)
# define DIR (0x04)
# define DOT_DIR (0x08)
# define CURR_DIR (0x10)
# define P_DIR (0x20)
# define DIRS (DIR+(DOT_DIR+(CURR_DIR+(P_DIR))))

//* To measure a part of code that overflows
struct dir_info_stored {
void(*search);
WIN32_FIND_DATA(wfd);
signed char(*parent_dir);
} typedef DIR_INFO_STORED;
//*/

signed(__cdecl read2dir(DIR_INFO_STORED(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(TheNumbreOfTheDirectories);
extern signed(TheNumbreOfTheFiles);

enum {
SI, DI, CACHE
};

static signed const(attrib[]) = {
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

static signed char const(*(attribp[])) = {
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

auto signed char const(CURRENT_DIRECTORY) = ('.');

auto WIN32_FIND_DATA(wfd);

auto SYSTEMTIME(st);

auto signed char(craft[BUFF]);
auto signed char(buff[BUFF]);
auto signed char(*p);

auto DIR_INFO_STORED(dis);
auto signed(i), (l), (r);
auto signed short(attrib_flag) = (0x01);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!((*argp).search)) return(0x00);
if(!((*argp).parent_dir)) return(0x00);

/* Monitor
printf("%s%p\n", ("argp (i.e., of data type (DIR_INFO_STORED*)) is: "), (argp));
printf("%s%p\n", ("(*argp).search is: "), (*argp).search);
printf("%s%p\n", ("(*argp).parent_dir is: "), (*argp).parent_dir);
printf("%s%s\n", ("(*argp).parent_dir is: "), (*argp).parent_dir);
//*/

XOR(flag, flag);
p = ((*argp).wfd.cFileName);

/* Monitor
printf("%s%p\n", ("(*argp).wfd.cFileName is: "), (*argp).wfd.cFileName);
printf("%s%s\n", ("(*argp).wfd.cFileName is: "), (*argp).wfd.cFileName);
printf("%s%p\n", ("p is: "), (p));
printf("%s%s\n", ("p is: "), (p));
//*/

// Directory Check!
flag = (signed short) dir_or_file(&((*argp).wfd));

// printf("%s%d\n", "The flag after using fn. dir_or_file() is: ", flag);

/* Commentary
# define FILE (0x01)
# define DOT_FILE (0x02)
# define DIR (0x04)
# define DOT_DIR (0x08)
# define CURR_DIR (0x10)
# define P_DIR (0x20)
# define DIRS (DIR+(DOT_DIR+(CURR_DIR+(P_DIR))))
rf. at fn. dir_or_file()
//*/

if(flag&(DIR+(DOT_DIR))) {
// Call after crafting the parent path.
r = cpy(craft, (*argp).parent_dir);
if(!r) {
printf("%s\n", "<< An error has occurred at fn. cpy().");
return(0x00);
}
*(craft+(r+(~(NIL)))) = (0x00);
sprintf(buff, "%s%s%s", craft, p, "/*");
// printf("%s%s\n", "The buff is: ", buff);
r = search2dir(buff);

printf("\n");
printf("%s\n", (*argp).parent_dir);
}

// Output a directory name
if(flag&(DIRS)) {
printf("%s", " d ");
printf("%s", p);
TheNumbreOfTheDirectories++;
/* Check the attributes of a directory or of a file */
if(attrib_flag) r = attrib_of((*argp).wfd.dwFileAttributes, attrib, attribp);
}

else {
// printf("%s%d\n", "The flag value when outputting a file name is: ", flag);
// Output a file name
printf("%s", " - ");
printf("%s", p);
TheNumbreOfTheFiles++;
/* Check the attributes of a directory or of a file */
if(attrib_flag) r = attrib_of((*argp).wfd.dwFileAttributes, attrib, attribp);
}

/* To go to the next step */
printf("\n");

/* Update the search handle */
r = FindNextFile((*argp).search, &(dis.wfd));

if(!r) {
r = GetLastError();
if(r^(ERROR_NO_MORE_FILES)) printf("%s%Xh\n", "Error: No More Files at fn. FindNextFile(). with error no. ", r);
return(0x01);
}

// Setting
dis.search = (*argp).search;
dis.parent_dir = (*argp).parent_dir;

return (1+(read2dir(&dis)));
}
