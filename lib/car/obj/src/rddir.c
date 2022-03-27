/* **** Notes

Depth-first searching

Remarks:
Using along with fn. finds
*/


# define CALEND
# define CAR
# define C_W32API
# include "../../../incl/config.h"
# include "../../../incl/c_dir.h"

signed(__cdecl rddir(c_dirs_info_t(*argp))) {

void *dis;
auto signed char *path;
auto signed char *craft;
auto signed char *b,*p,*t;
auto signed i,r;
auto signed short disable;
auto signed short flag;
auto SYSTEMTIME st;

if(!argp) return(0x00);
if(!(R(dis,*argp))) return(0x00);
if(!(R(search,*(R(dis,*argp))))) return(0x00);
if(!(R(p_dir,*(R(dis,*argp))))) return(0x00);

p = (R(cFileName,R(wfd,*(R(dis,*argp)))));

flag = (signed short) dir_or_file(&(R(wfd,*(R(dis,*argp)))));
if(DBG) printf("%s %Xh \n","The flag after using fn. dir_or_file() is:",flag);

if(OPT_RECURSION&(R(flag,*argp))) {
if(!(flag&(C_PDIR+(C_CURRDIR+(C_FILE))))) {

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
r = finds(argp);
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
}}

b = (R(p_dir,*(R(dis,*argp))));
r = ct(b);
*(--r+(b)) = (0x00);
if(DBG) printf("%s %d \n","flag:",flag);

OR(R(flag,*argp),OPT_VISIBLE);

if(*(CLI_LK_TARGET+(R(b,*argp)))) {
t = (p);
AND(R(flag,*argp),(~OPT_VISIBLE));
AND(i,0x00);
if(OPT_IGNORE&(R(flag,*argp))) p = cv_a(0x00,p);
r = cmpr_part(&i,p,*(CLI_LK_TARGET+(R(b,*argp))));
if(!i) OR(R(flag,*argp),OPT_VISIBLE);
if(OPT_IGNORE&(R(flag,*argp))) rl(p);
p = (t);
}

if(OPT_VISIBLE&(R(flag,*argp))) {
AND(disable,0x00);
if(flag&(C_DIRS)) {
// Output a directory name
INC(*(CLI_LK_DIRECTORY+(R(r,*argp))));
printf(" %s %s%s/","d",b,p);
}
else {
// Or output a file name
if(!(OPT_DIRECTORIES&(R(flag,*argp)))) {
INC(*(CLI_LK_FILE+(R(r,*argp))));
printf(" %s %s%s","-",b,p);
}
else OR(disable,0x01);
}
/* Check the attributes of a directory or of a file */
if(!disable) {
if(OPT_ATTRIBS&(R(flag,*argp))) {
r = attrib_of(R(dwFileAttributes,R(wfd,*(R(dis,*argp)))));
if(!r) printf("%s \n","An error has occurred at fn. attrib_of().");
}
printf("\n");
}}

// restore
*(b+(ct(b))) = ('*');

/* Read i.e., update with the search handle */
r = FindNextFile(R(search,*(R(dis,*argp))),&(R(wfd,*(R(dis,*argp)))));
if(!r) {
r = currently_occurring_error();
if(r^(ERROR_NO_MORE_FILES)) printf("%s %Xh \n","<< Error at fn. FindNextFile() with error no.",r);
return(0x01);
}

return(0x01+(rddir(argp)));
}
