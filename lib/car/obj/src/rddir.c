/* **** Notes

Depth-first searching

Remarks:
Using along with fn. finds
*/


# define C_CODE_STDS
# define C_W32API
# define CAR
# include "../../../incl/config.h"

# define BUFF (0x400)

# define OPT_RECURSION (0x02)
# define OPT_ATTRIBS (0x01)
// for signed short(cmdln_flag).

//* To measure a part of code that overflows
struct dir_info_stored {
void *search;
signed char *p_dir;
WIN32_FIND_DATA wfd;
} typedef DIR_INFO_STORED;
//*/

signed(__cdecl rddir(signed short(cmdln_flag),DIR_INFO_STORED(*argp))) {

/* **** DATA, BSS and STACK */
extern signed TheNumbreOfDirectories;
extern signed TheNumbreOfFiles;

static signed const attrib[] = {
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
(signed) (0x00),
};

static signed char const *(attribp[]) = {
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
(char signed(*)) (0x00),
};

auto SYSTEMTIME st;

auto signed char craft[BUFF];
auto signed char *p;

auto signed r;
auto signed short flag;
// for fn. dir_or_file()

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(R(search,*argp))) return(0x00);
if(!(R(p_dir,*argp))) return(0x00);

/* Monitor
printf("%s %p \n","argp i.e., of data type (DIR_INFO_STORED*) is:",argp);
printf("%s %p \n","R(search,*argp) is:",R(search,*argp));
printf("%s %s %s %p \n","R(p_dir,*argp) is:",R(p_dir,*argp),"/",R(p_dir,*argp));
//*/

p = (R(cFileName,R(wfd,*argp)));

/* Monitor
printf("%s %s %s %p \n","R(cFileName,R(wfd,*argp)) is:",R(cFileName,R(wfd,*argp)),"/",R(cFileName,R(wfd,*argp)));
printf("%s %s %s %p \n","p is:",p,"/",p);
//*/

flag = (signed short) dir_or_file(&(R(wfd,*argp)));
if(DBG) printf("%s %d \n","The flag after using fn. dir_or_file() is:",flag);

if(cmdln_flag&(OPT_RECURSION)) {
if(flag&(C_DIR+(C_DOTDIR))) {

// Call fn. finds() after crafting the parent path.
r = cpy(craft,R(p_dir,*argp));
if(!r) {
printf("%s \n","<< An error has occurred at fn. cpy().");
return(0x00);
}
*(craft+(r+(~(0x00)))) = (0x00);
/* And append to an array craft using fn. append2 (or fn. concat2).
r = concat2(craft,p,"/*",(void*) 0x00);
if(!r) {
printf("%s \n","<< Error at fn. concat2()");
return(0x00);
}
//*/
r = append2(craft,p);
if(!r) {
printf("%s \n","<< Error at fn. append2() the first");
return(0x00);
}
r = append2(craft,"/*");
if(!r) {
printf("%s \n","<< Error at fn. append2() the second");
return(0x00);
}
if(DBG) printf("%s %s \n","craft is:",craft);
r = finds(cmdln_flag,craft);
/* Pay attention to handling of the return value. */
if(!r) {
}
else {
}
// Being gone back to the previous directory.
printf("\n");
printf("%s \n",R(p_dir,*argp));
}}

if(DBG) printf("%s %d \n","flag:",flag);

if(flag&(C_DIRS)) {
// Output a directory name
printf("%s "," d");
printf("%s ",p);
TheNumbreOfDirectories++;
}

else {
// Or output a file name
printf("%s "," -");
printf("%s ",p);
TheNumbreOfFiles++;
}

/* Check the attributes of a directory or of a file */
if(cmdln_flag&(OPT_ATTRIBS)) r = attrib_of(R(dwFileAttributes,R(wfd,*argp)),attrib,attribp);
if(!r) printf("%s \n","An error has occurred at fn. attrib_of().");

/* To go to the next step */
printf("\n");

/* Read i.e., update with the search handle */
r = FindNextFile(R(search,*argp),&(R(wfd,*argp)));
if(!r) {
r = GetLastError();
if(r^(ERROR_NO_MORE_FILES)) printf("%s %Xh \n","<< Error at fn. FindNextFile() with error no.",r);
return(0x01);
}

return(0x01+(rddir(cmdln_flag,argp)));
}
