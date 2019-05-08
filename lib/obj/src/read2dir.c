/* **** Notes

Depth-first searching

Remarks:
Using along with fn. finds
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

# define BUFF (0x400)

# define FILE (0x01)
# define DOT_FILE (0x02)
# define DIR (0x04)
# define DOT_DIR (0x08)
# define CURR_DIR (0x10)
# define P_DIR (0x20)
# define DIRS (DIR+(DOT_DIR+(CURR_DIR+(P_DIR))))
// for signed short(flag).

# define OPT_RECURSION (0x02)
# define OPT_ATTRIBS (0x01)
// for signed short(cmdln_flag).

//* To measure a part of code that overflows
struct dir_info_stored {
void(*search);
signed char(*p_dir);
WIN32_FIND_DATA(wfd);
} typedef DIR_INFO_STORED;
//*/

signed(__cdecl read2dir(signed short(cmdln_flag), DIR_INFO_STORED(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(TheNumbreOfTheDirectories);
extern signed(TheNumbreOfTheFiles);

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

auto SYSTEMTIME(st);

auto signed char(craft[BUFF]);
auto signed char(*p);

auto signed(r);
auto signed short(flag);
// for fn. dir_or_file()

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!((*argp).search)) return(0x00);
if(!((*argp).p_dir)) return(0x00);

/* Monitor
printf("%s%p\n", ("argp (i.e., of data type (DIR_INFO_STORED*)) is: "), (argp));
printf("%s%p\n", ("(*argp).search is: "), (*argp).search);
printf("%s%p\n", ("(*argp).p_dir is: "), (*argp).p_dir);
printf("%s%s\n", ("(*argp).p_dir is: "), (*argp).p_dir);
//*/

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
*/

if(cmdln_flag&(OPT_RECURSION)) {

if(flag&(DIR+(DOT_DIR))) {

// Call fn. find2() after crafting the parent path.
r = cpy(craft, (*argp).p_dir);
if(!r) {
printf("%s\n", "<< An error has occurred at fn. cpy().");
return(0x00);
}
*(craft+(r+(~(NIL)))) = (0x00);
/* And append to an array craft using fn. append2 (or fn. concat2).
r = concat2(craft, p, "/*", (void*) 0x00);
if(!r) {
printf("%s\n", "<< Error at fn. concat2()");
return(0x00);
}
//*/
r = append2(craft, p);
if(!r) {
printf("%s\n", "<< Error at fn. append2() the first");
return(0x00);
}
r = append2(craft, "/*");
if(!r) {
printf("%s\n", "<< Error at fn. append2() the second");
return(0x00);
}
// And monitor.
// printf("%s%s\n", "craft is: ", craft);
r = finds(cmdln_flag, craft);
/* Pay attention to handling of the return value. */
if(!r) {
}
else {
}
// Being gone back to the previous directory.
printf("\n");
printf("%s\n", (*argp).p_dir);
}}

// Monitoring
// printf("%s%d\n", "The flag is: ", flag);

if(flag&(DIRS)) {
// Output a directory name
printf("%s", " d ");
printf("%s", p);
TheNumbreOfTheDirectories++;
}

else {
// Or output a file name
printf("%s", " - ");
printf("%s", p);
TheNumbreOfTheFiles++;
}

/* Check the attributes of a directory or of a file */
if(cmdln_flag&(OPT_ATTRIBS)) r = attrib_of((*argp).wfd.dwFileAttributes, attrib, attribp);
if(!r) printf("%s\n", "An error has occurred at fn. attrib_of().");

/* To go to the next step */
printf("\n");

/* Read i.e., update with the search handle */
r = FindNextFile((*argp).search, &((*argp).wfd));

if(!r) {
r = GetLastError();
if(r^(ERROR_NO_MORE_FILES)) printf("%s%Xh\n", "<< Error at fn. FindNextFile() with error no. ", r);
return(0x01);
}

return(1+(read2dir(cmdln_flag, argp)));
}
