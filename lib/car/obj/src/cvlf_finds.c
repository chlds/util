/* **** Notes

Convert the code of line break into LF.
*/


# define CALEND
# define CAR
# define C_W32API
# include "../../../incl/config.h"
# include "../../../incl/c_dir.h"

signed(__cdecl cvlf_finds(c_dirs_info_t(*argp))) {

auto signed char *path;
auto signed r;
auto dir_info_stored_t dis;

if(!argp) return(0x00);
// if(!(R(dis,*argp))) return(0x00);

// printf("\n");
// printf("%s \n",*(CLI_LK_PATH+(R(b,*argp))));

/* Open(, map, store or..) on the RAM */
dis.p_dir = (*(CLI_LK_PATH+(R(b,*argp))));
dis.search = (void(*)) FindFirstFile(dis.p_dir,&(R(wfd,dis)));
if(EQ(INVALID_HANDLE_VALUE,dis.search)) {
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

r = cvlf_rddir(argp);
if(!r) printf("%s \n","<< Error at fn. cvlf_rddir()");
if(DBG) printf(" %d %s %s \n",r,"dir/files read on",dis.p_dir);

// restore
*(CLI_LK_PATH+(R(b,*argp))) = (path);
R(dis,*argp) = (&dis);

/* Close */
if(!(FindClose(dis.search))) {
r = currently_occurring_error();
printf("%s %Xh \n","<< Error at fn. FindClose() with error no.",r);
return(0x00);
}

return(r);
}
