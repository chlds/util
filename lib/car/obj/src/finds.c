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

printf("\n");
printf("%s \n",R(path,*argp));

Sleep(DELAY);

/* Open(, map, store or..) on the RAM */
dis.p_dir = (R(path,*argp));
dis.search = (void(*)) FindFirstFile(dis.p_dir,&(R(wfd,dis)));
if(!((signed long long) INVALID_HANDLE_VALUE^((signed long long) dis.search))) {
r = GetLastError();
printf("%s %Xh \n","<< Error at fn. FindFirstFile() with error no.",r);
if(!(r^(ERROR_FILE_NOT_FOUND))) printf("%s \n","No matching files can be found.");
//* Monitoring
printf("%s %s \n","and dis.p_dir:",dis.p_dir);
printf("%s %s \n","and R(path,*argp):",R(path,*argp));
//*/
return(0x00);
}

if(DBG) printf("%s %p \n","The search handle is:",dis.search);

R(dis,*argp) = (&dis);

// backup
path = (R(path,*argp));

r = rddir(argp);
if(!r) {
printf("%s \n","<< Error at fn. rddir()");
return(0x00);
}

printf(" %d %s %s \n",r,"dir/files read on",dis.p_dir);

// restore
R(path,*argp) = (path);
R(dis,*argp) = (&dis);

/* Close */
r = FindClose(dis.search);
if(!r) {
r = GetLastError();
printf("%s %Xh \n","<< Error at fn. FindClose() with error no.",r);
return(0x00);
}

return(0x01);
}
