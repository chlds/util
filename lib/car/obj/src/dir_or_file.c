/* **** Notes

Is it a directory or file..?
*/


# define C_W32API
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed short(__cdecl dir_or_file(WIN32_FIND_DATA(*argp))) {

auto signed char *b;
auto signed short flag;
auto signed char dot = ('.');

if(!argp) return(0x00);

b = (R(cFileName,*argp));
if(DBG) printf("%s %s \n","R(cFileName,*argp) is:",b);

AND(flag,0x00);
OR(flag,C_FILE);
if(!(dot^(*b))) OR(flag,C_DOTFILE);
if(FILE_ATTRIBUTE_DIRECTORY&(R(dwFileAttributes,*argp))) {
AND(flag,0x00);
OR(flag,C_DIR);
if(!(dot^(*b))) {
OR(flag,C_DOTDIR);
if(!(*(0x01+(b)))) OR(flag,C_CURRDIR);
if(*(0x01+(b))) {
if(!(*(0x02+(b)))) OR(flag,C_PDIR);
}}}

return(flag);
}
