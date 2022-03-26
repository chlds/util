/* **** Notes

A wrapper function to initialise arguments for fn. rddir to search in a directory tree using depth-first search
*/


# define CALEND
# define CAR
# define C_W32API
# include "../../../incl/config.h"
# include "../../../incl/c_dir.h"

signed(__cdecl finds(c_dirs_info_t(*argp))) {

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed char *path;
auto signed r;
auto dir_info_stored_t dis;

if(!argp) return(0x00);
// if(!(R(dis,*argp))) return(0x00);

if(OPT_DEPTH&(R(flag,*argp))) {
DEC(R(depth,*argp));
if(!(R(depth,*argp))) {
INC(R(depth,*argp));
return(0x01);
}}

// printf("\n");
// printf("%s \n",*(CLI_LK_PATH+(R(b,*argp))));

if(OPT_UNLIMITED^(OPT_UNLIMITED&(R(flag,*argp)))) Sleep(DELAY);

/* Open(, map, store or..) on the RAM */
dis.p_dir = (*(CLI_LK_PATH+(R(b,*argp))));
dis.search = (void(*)) FindFirstFile(dis.p_dir,&(R(wfd,dis)));
if(EQ(INVALID_HANDLE_VALUE,dis.search)) {
if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));
r = currently_occurring_error();
if(OPT_VERBOSE&(R(flag,*argp))) {
printf("%s %Xh \n","<< Error at fn. FindFirstFile() with error no.",r);
if(!(r^(ERROR_FILE_NOT_FOUND))) printf("%s \n","No matching files can be found.");
if(0x01/* DBG */) {
// monitoring
printf(" [%s %s] \n","dis.p_dir:",dis.p_dir);
printf(" [%s %s] \n","*(CLI_LK_PATH+(R(b,*argp:",*(CLI_LK_PATH+(R(b,*argp))));
}}
return(0x00);
}

if(DBG) printf("%s %p \n","The search handle is:",dis.search);

R(dis,*argp) = (&dis);

// backup
path = (*(CLI_LK_PATH+(R(b,*argp))));

r = rddir(argp);
if(!r) printf("%s \n","<< Error at fn. rddir()");
if(DBG) printf(" %d %s %s \n",r,"dir/files read on",dis.p_dir);

// restore
*(CLI_LK_PATH+(R(b,*argp))) = (path);
R(dis,*argp) = (&dis);

/* Close */
if(!(FindClose(dis.search))) {
if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));
r = currently_occurring_error();
printf("%s %Xh \n","<< Error at fn. FindClose() with error no.",r);
return(0x00);
}

if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));

return(r);
}
