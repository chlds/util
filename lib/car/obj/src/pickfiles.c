/* **** Notes

Depth-first searching

Remarks:
If the function fails, the return value is (0x00).
*/


# define C_CODE_STDS
# define C_W32API
# define CAR
# include "../../../incl/config.h"

# define BUFF (0x400)

signed(__cdecl pickfiles(signed char(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
extern signed TheNumbreOfDirectories;
extern signed TheNumbreOfFiles;

auto signed attrib[] = {
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

auto signed char *(attribp[]) = {
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

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x08);
auto signed const DELAY = (0x02*(QUANTUM));

auto SYSTEMTIME st;

auto void *search;
auto WIN32_FIND_DATA wfd;

auto signed char buff[BUFF];

auto void *v;
// auto signed char *b;

auto signed dif;
auto signed i,l,r;
auto signed differential = (0x00);
auto signed short flag;

/* **** CODE/TEXT */
if(!si) {
printf("\n");
printf("%s \n",di);
}

/* opendir */
search = (void(*)) FindFirstFile(di,&wfd);
if(EQ(INVALID_HANDLE_VALUE,search)) {
r = GetLastError();
printf("%s %Xh ","<< Error at fn. FindFirstFile() with error no.",r);
printf("%s %s \n","at path",di);
if(!(r^(ERROR_FILE_NOT_FOUND))) printf("%s \n","No matching files.");
return(0x00);
}

if(DBG) printf("%s %p \n","The search handle is:",search);

r = ct(di);
*(di+(r+(~(0x00)))) = (0x00);
if(DBG) printf("%s %s \n","crafted di is:",di);

/* readdir */
XOR(l,l);

while(1) {

if(l<(SNOOZE)) l++;
else {
XOR(l,l);
Sleep(DELAY);
}

flag = (signed short) dir_or_file(&wfd);
if(flag&(C_DOTDIR|(C_DIR))) {
// Going to recur
sprintf(buff,"%s%s%s",di,wfd.cFileName,"/*");
if(DBG) printf("%s %s \n","concatenated buff is:",buff);
r = pickfiles(buff,si);
/* Pay attention to handling of the return value. */
if(!r) {
}
else {
}
// Being gone back to the previous directory.
if(!si) {
printf("\n");
printf("%s \n",di);
}}

/* Output all the dir's and files or the specific dir's and files in a directory tree */
/* Compare the ones in case-sensitive strings */
if(si) r = cmpr_parts(&differential,wfd.cFileName,si);
else r = (0x01);

if(r) {
if(!differential) {

if(flag&(C_DIRS)) {
// Output a directory
printf("%s %s%s%s "," d",di,wfd.cFileName,"/");
TheNumbreOfDirectories++;
}
else {
// Or output a file
printf("%s %s%s "," -",di,wfd.cFileName);
TheNumbreOfFiles++;
}

// And output the file attributes
XOR(i,i);
while(*(attrib+(i))) {
if(wfd.dwFileAttributes&(*(attrib+(i)))) printf("  %s ",*(attribp+(i)));
i++;
}

printf("\n");
}}

/* And find the next file */
r = FindNextFile(search,&wfd);
if(!r) {
r = GetLastError();
if(r^(ERROR_NO_MORE_FILES)) printf("%s %Xh \n","<< Error at fn. FindNextFile() with error no.",r);
break;
}}

/* closedir */
r = FindClose(search);
if(!r) {
r = GetLastError();
printf("%s %Xh \n","<< Error at fn. FindClose() with error no.",r);
return(0x00);
}

return(0x01);
}
