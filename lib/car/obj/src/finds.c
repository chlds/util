/* **** Notes

A wrapper function to initialise arguments for fn. rddir to search in a directory tree using depth-first search
*/


# define C_CODE_STDS
# define C_W32API
# define CAR
# include "../../../incl/config.h"

# include "../../../incl/c_dir.h"

signed(__cdecl finds(C_DIRS_INFO(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x02*(QUANTUM));

auto SYSTEMTIME st;

auto DIR_INFO_STORED dis;

auto signed char *path;
auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
// if(!(R(dis,*argp))) return(0x00);

if(OPT_DEPTH&(R(flag,*argp))) {
DEC(R(depth,*argp));
if(!(R(depth,*argp))) {
INC(R(depth,*argp));
return(0x01);
}}

// printf("\n");
// printf("%s \n",R(path,*argp));

if(OPT_UNLIMITED^(OPT_UNLIMITED&(R(flag,*argp)))) Sleep(DELAY);

/* Open(, map, store or..) on the RAM */
dis.p_dir = (R(path,*argp));
dis.search = (void(*)) FindFirstFile(dis.p_dir,&(R(wfd,dis)));
if(EQ(INVALID_HANDLE_VALUE,dis.search)) {
if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));
r = GetLastError();
if(OPT_VERBOSE&(R(flag,*argp))) {
printf("%s %Xh \n","<< Error at fn. FindFirstFile() with error no.",r);
if(!(r^(ERROR_FILE_NOT_FOUND))) printf("%s \n","No matching files can be found.");
if(0x01/* DBG */) {
// monitoring
printf(" [%s %s] \n","dis.p_dir:",dis.p_dir);
printf(" [%s %s] \n","R(path,*argp):",R(path,*argp));
}}
return(0x00);
}

if(DBG) printf("%s %p \n","The search handle is:",dis.search);

R(dis,*argp) = (&dis);

// backup
path = (R(path,*argp));

r = rddir(argp);
if(!r) {
if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));
printf("%s \n","<< Error at fn. rddir()");
return(0x00);
}

if(DBG) printf(" %d %s %s \n",r,"dir/files read on",dis.p_dir);

// restore
R(path,*argp) = (path);
R(dis,*argp) = (&dis);

/* Close */
r = FindClose(dis.search);
if(!r) {
if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));
r = GetLastError();
printf("%s %Xh \n","<< Error at fn. FindClose() with error no.",r);
return(0x00);
}

if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));

return(0x01);
}
