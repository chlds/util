/* **** Notes

Is it a directory or file..?
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

# define BUFF (0x400)
# define N (0x03)

# define FILE (0x01)
# define DOT_FILE (0x02)
# define DIR (0x04)
# define DOT_DIR (0x08)
# define CURR_DIR (0x10)
# define P_DIR (0x20)
# define DIRS (P_DIR+(CURR_DIR+(DOT_DIR+(DIR))))

signed short(__cdecl dir_or_file(WIN32_FIND_DATA(*argp))) {

/* **** DATA
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x08);
auto signed const(DELAY) = (0x02*(QUANTUM));
//*/

auto signed char const(CURRENT_DIRECTORY) = ('.');
auto signed char const(A_DOT_CHARACTER) = ('.');

auto signed char(*p);
auto signed(i), (l), (r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

p = ((*argp).cFileName);
// printf("%s%s\n", "(*argp).cFileName is: ", p);

XOR(flag, flag);

/* Dir. Check! */
if(FILE_ATTRIBUTE_DIRECTORY&((*argp).dwFileAttributes)) OR(flag, DIR);

/* It is a directory */
if(flag) {

if(!(CURRENT_DIRECTORY^(*p))) {
XOR(flag, flag);
OR(flag, DOT_DIR);
}

if(!(flag^(DOT_DIR))) {
if(!(*(p+(1)))) {
XOR(flag, flag);
OR(flag, CURR_DIR);
}}

if(!(flag^(DOT_DIR))) {
if(!(A_DOT_CHARACTER^(*(p+(1))))) {
if(!(*(p+(2)))) {
XOR(flag, flag);
OR(flag, P_DIR);
}}}}

/* It is a file i.e., the flag is (0x00). */
else {
if(!(A_DOT_CHARACTER^(*p))) OR(flag, DOT_FILE);
else OR(flag, FILE);
}

return(flag);
}
