/* **** Notes

Depth-first searching

cl -c pickfiles.c
cl pick.obj pickfiles.obj ../../../lib/cui.lib

*/



# define C_CODE_STDS
# define C_AS

# include "./../../../incl/config.h"
# include <windows.h>

# define BUFF (0x400)
# define N (0x03)



char signed(__cdecl pickfiles(char signed(*argp))) {


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


auto const int signed(QUANTUM) = (int signed) (0x10);
auto const int signed(SNOOZE) = (int signed) (0x08);
auto const int signed(DELAY) = (int signed) (2*(QUANTUM));
// in milli-seconds

auto WIN32_FIND_DATA(wfd);

auto void(*(search[N]));

auto SYSTEMTIME(st);

auto char signed(buff[BUFF]);

auto char signed(*p);

auto int signed(i), (l), (r);
auto short signed(flag);
auto char signed(c);


/* **** **** CODE/TEXT */

printf("\n");
printf("%s", (argp));


/* **** opendir */

(*(search+(SI))) = (void(*)) FindFirstFile(argp, (&wfd));

if(!((int long long) INVALID_HANDLE_VALUE^(int long long) (*(search+(SI))))) {
if(!(ERROR_NO_MORE_FILES^(r = GetLastError()))) {
}
else {
printf("%s", ("<< Error at fn. FindFirstFile()."));
printf("%s%Xh\n", (" and the last error number is: "), (r));
printf("%s%s\n", ("and the argp is: "), (argp));
return(char signed) (~(NIL));
}}

else {
// printf("%s%p\n", ("The search handle is: "), (*(search+(SI))));
}


c = ct_lett(&i, (argp));
(*(argp+(i+(~(NIL))))) = (char) (NIL);

// Monitoring
// printf("%s%s\n", ("The crafted argp is: "), (argp));


/* **** readdir */

XOR(l, l);

while(1) {

if(l<(SNOOZE)) {
(l++);
}
else {
XOR(l, l);
Sleep(DELAY);
}

printf("\n");


if(wfd.dwFileAttributes&(FILE_ATTRIBUTE_DIRECTORY)) {

c = cmp_lett(&i, (".."), (wfd.cFileName));
if(!(i)) {
}
else {
c = cmp_lett(&i, ("."), (wfd.cFileName));
if(!(i)) {
}
else {
// To the recursion
sprintf(buff, ("%s%s%s"), (argp), (wfd.cFileName), ("/*"));
// Monitoring
// printf("%s%s\n", ("The buff is: "), (buff));
c = pickfiles(buff);
printf("\n");
printf("%s\n", (argp));
}}

// Output a directory
printf("%s%s%s", (" d "), (wfd.cFileName), ("/"));
(TheNumbreOfTheDirectories++);
}

// Or output a file
else {
printf("%s%s", (" - "), (wfd.cFileName));
(TheNumbreOfTheFiles++);
}


// Output the file attributes

XOR(i, i);
while(*(attrib+(i))) {
// Sleep(DELAY);
// printf("%s%d", ("i is: "), (i));
if(wfd.dwFileAttributes&(*(attrib+(i)))) {
printf("%s%s", ("  "), (*(attribp+(i))));
}
(i++);
}


/* Find the next file */

r = FindNextFile(*(search+(SI)), (&wfd));
if(!(r)) {
if(!(ERROR_NO_MORE_FILES^(r = GetLastError()))) {
break;
}
else {
printf("%s", ("<< Error at fn. FindNextFile()."));
printf("%s%Xh\n", (" and the last error number is: "), (r));
break;
}}}




/* **** closedir */

r = (int signed) FindClose(*(search+(SI)));

if(!(r)) {
printf("%s", ("<< Error at fn. FindClose()."));
printf("%s%Xh\n", (" and the last error number is: "), (GetLastError()));
return(char signed) (~(NIL));
}
else {
/*
printf("\n");
printf("%s\n", ("Successfully closed."));
//*/
}


printf("\n");


XOR(c, c);
return(char signed) (c);
}
