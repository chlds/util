/* **** Notes

Convert the code of line break into LF.

Remarks:
Along with fn. cvlf_finds
*/


# define CALEND
# define CAR
# define C_W32API
# include "../../../incl/config.h"
# include "../../../incl/c_dir.h"

signed(__cdecl cvlf_rddir(c_dirs_info_t(*argp))) {

auto SYSTEMTIME st;

void *dis;
auto signed char *path;
auto signed char *craft;
auto signed char *b,*p,*t;

auto signed i,r;
auto signed short disable;
auto signed short flag;

if(!argp) return(0x00);
if(!(R(dis,*argp))) return(0x00);
if(!(R(search,*(R(dis,*argp))))) return(0x00);
if(!(R(p_dir,*(R(dis,*argp))))) return(0x00);

p = (R(cFileName,R(wfd,*(R(dis,*argp)))));

flag = (signed short) dir_or_file(&(R(wfd,*(R(dis,*argp)))));
if(DBG) printf("%s %d \n","The flag after using fn. dir_or_file() is:",flag);

if(flag&(C_DIR+(C_DOTDIR))) {
// backup
dis = (R(dis,*argp));
path = (*(CLI_LK_PATH+(R(b,*argp))));
// call fn. finds() after crafting the parent path.
r = ct("/*");
r = (r+(ct(p)));
r = (r+(ct(R(p_dir,*(R(dis,*argp))))));
r++;
r = (r*(sizeof(*p)));
craft = (signed char(*)) alloc(r);
r = cpy(craft,R(p_dir,*(R(dis,*argp))));
if(!r) {
printf("%s \n","<< An error has occurred at fn. cpy().");
return(0x00);
}
*(--r+(craft)) = (0x00);
r = append_b(craft,p);
if(!r) {
printf("%s \n","<< Error at fn. append_b() the first");
return(0x00);
}
r = append_b(craft,"/*");
if(!r) {
printf("%s \n","<< Error at fn. append_b() the second");
return(0x00);
}
if(DBG) printf("%s %s \n","craft is:",craft);
*(CLI_LK_PATH+(R(b,*argp))) = (craft);
r = cvlf_finds(argp);
/* Pay attention to handling of the return value. */
if(!r) {
}
embed(0x00,craft);
rl(craft);
craft = (0x00);
// restore
*(CLI_LK_PATH+(R(b,*argp))) = (path);
R(dis,*argp) = (dis);
// Being gone back to the previous directory.
// printf("\n");
// printf("%s \n",R(p_dir,*(R(dis,*argp))));
}

b = (R(p_dir,*(R(dis,*argp))));
r = ct(b);
*(--r+(b)) = (0x00);
if(DBG) printf("%s %d \n","flag:",flag);

if(flag&(C_DIRS)) {
// Output a directory name
INC(*(CLI_LK_DIRECTORY+(R(r,*argp))));
printf(" %s %s%s/","d",b,p);
}
else {
// Or output a file name
INC(*(CLI_LK_FILE+(R(r,*argp))));
printf(" %s %s%s","-",b,p);
if(cf_f_extensions(*(CLI_LK_F_EXTENSION+(R(b,*argp))),p)) {
t = (0x00);
cat_b(&t,b,p,(void*)0x00);
if(!(cv_lf(0x00/* backup */,t))) printf("%s \n","<< Error at fn. cv_lf()");
rl(t);
}}

printf("\n");

// restore
*(b+(ct(b))) = ('*');

/* Read i.e., update with the search handle */
r = FindNextFile(R(search,*(R(dis,*argp))),&(R(wfd,*(R(dis,*argp)))));
if(!r) {
r = currently_occurring_error();
if(r^(ERROR_NO_MORE_FILES)) printf("%s %Xh \n","<< Error at fn. FindNextFile() with error no.",r);
return(0x01);
}

return(0x01+(cvlf_rddir(argp)));
}
