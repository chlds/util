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
dis.search = (void(*)) open_dir_b(dis.p_dir,&(R(wfd,dis)));
if(!(dis.search)) {
r = currently_occurring_error();
if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));
if(OPT_VERBOSE&(R(flag,*argp))) {
printf("%s %Xh \n","<< Error at fn. open_dir_b() with error no.",r);
printf("\t[%s] \n",dis.p_dir);
if(EQ(0x05,r)) printf("\t[%s] \n","Access denied");
}
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
if(!(close_dir_b(dis.search))) {
if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));
r = currently_occurring_error();
printf("%s %Xh \n","<< Error at fn. close_dir_b() with error no.",r);
return(0x00);
}

if(OPT_DEPTH&(R(flag,*argp))) INC(R(depth,*argp));

return(r);
}
