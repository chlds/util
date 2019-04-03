/* **** Notes

Is it a directory or file..?

*/


# define C_CODE_STDS
# define C_AS

# include "./../../../incl/config.h"
# include <windows.h>

# define BUFF (0x400)
# define N (0x03)

# define FILE (0x01)
# define DOT_FILE (0x02)
# define DIR (0x04)
# define DOT_DIR (0x08)
# define CURR_DIR (0x10)
# define P_DIR (0x20)
# define DIRS (P_DIR+(CURR_DIR+(DOT_DIR+(DIR))))


char signed(__cdecl dir_or_file(WIN32_FIND_DATA(*argp))) {

/* **** **** DATA
auto int signed const(QUANTUM) = (0x10);
auto int signed const(SNOOZE) = (0x08);
auto int signed const(DELAY) = (0x02*(QUANTUM));
//*/

auto char signed const(CURRENT_DIRECTORY) = ('.');
auto char signed const(A_DOT_CHARACTER) = ('.');

auto char signed(*p);

auto int signed(i), (l), (r);
auto short signed(flag);
auto char signed(c);

/* **** **** CODE/TEXT */
if(!argp) return(NIL);

XOR(flag, flag);
p = ((*argp).cFileName);

// printf("%s%s\n", ("p is: "), (p));

// Directory Check!
if(FILE_ATTRIBUTE_DIRECTORY&((*argp).dwFileAttributes)) OR(flag, DIR);

/* It is a directory */
if(flag) {

if(!(CURRENT_DIRECTORY^(*(p+(NIL))))) {
XOR(flag, flag);
OR(flag, DOT_DIR);
}

if(!(flag^(DOT_DIR))) {
if(!(*(p+(1)))) {
XOR(flag, flag);
OR(flag, CURR_DIR);
}}

if(!(flag^(DOT_DIR))) {
if(!(CURRENT_DIRECTORY^(*(p+(1))))) {
if(!(*(p+(2)))) {
XOR(flag, flag);
OR(flag, P_DIR);
}}}}

/* It is a file */
else {
if(!(A_DOT_CHARACTER^(*(p+(NIL))))) OR(flag, DOT_FILE);
else OR(flag, FILE);
}

return(flag);
}
