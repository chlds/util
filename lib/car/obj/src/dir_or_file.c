/* **** Notes

Is it a directory or file..?
*/


# define C_CODE_STDS
# define C_W32API
# define CAR
# include "../../../incl/config.h"

signed short(__cdecl dir_or_file(WIN32_FIND_DATA(*argp))) {

auto signed char const A_DOT_CHARACTER = ('.');

auto signed char *p;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

p = (R(cFileName,*argp));
if(DBG) printf("%s %s \n","R(cFileName,*argp) is:",p);

XOR(flag,flag);

/* Dir. Check! */
if(FILE_ATTRIBUTE_DIRECTORY&(R(dwFileAttributes,*argp))) OR(flag,C_DIR);

/* It is a directory */
if(flag) {
if(!(A_DOT_CHARACTER^(*p))) {
XOR(flag,flag);
OR(flag,C_DOTDIR);
}
if(!(flag^(C_DOTDIR))) {
if(!(A_DOT_CHARACTER^(*(p+(1))))) {
if(!(*(p+(0x02)))) {
XOR(flag,flag);
OR(flag,C_PDIR);
}}
if(!(*(p+(0x01)))) {
XOR(flag,flag);
OR(flag,C_CURRDIR);
}}}

/* It is a file i.e., the flag is (0x00). */
else {
if(!(A_DOT_CHARACTER^(*p))) OR(flag,C_DOTFILE);
else OR(flag,C_FILE);
}

return(flag);
}
