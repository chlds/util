/* **** Notes

Look up sub-directories and their contents in the depth-first search

Remarks:
This program may immediately cause a stack overflow.
*/


# define CALEND
# define CAR
# define C_W32API
# include "./../../../incl/config.h"
# include "./../../../incl/c_dir.h"

signed(__cdecl agent_lk(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char *b,*t;
auto signed r;
auto signed short flag;
auto c_dirs_info_t cdi;

if(argc<(0x02)) return(lk_help());

XOR(flag,flag);
if(0x02<(argc)) {
b = (*(argv+(0x01)));
if(!(lk_flags(&flag,b))) return(0x00);
// also
AND(r,0x00);
if(!(cv_da(0x0A,&r,b))) return(0x00);
if(r<(0x00)) r = (0x01+(~r));
if(r) {
OR(flag,OPT_RECURSION);
OR(flag,OPT_DEPTH);
r++;
}}

// ignore case distinctions or..
t = (0x00);
*(CLI_LK_TARGET+(R(b,cdi))) = (t);
if(0x03<(argc)) {
t = (*(argv+(0x02)));
*(CLI_LK_TARGET+(R(b,cdi))) = (t);
// also
if(OPT_IGNORE&(flag)) {
t = cv_a(0x00,t);
if(!t) return(0x00);
*(CLI_LK_TARGET+(R(b,cdi))) = (t);
}}

b = (0x00);
if(!(arr_dir(&b,*(argv+(argc+(~0x00)))))) return(0x00);
if(DBG) printf("%s: %s \n","Path",b);

cdi.depth = (r);
r = (CLI_LK_FILES);
while(r) *(--r+(R(r,cdi))) = (0x00);
cdi.flag = (flag);
cdi.dis = (0x00);
*(CLI_LK_PATH+(R(b,cdi))) = (b);

if(!(finds(&cdi))) {
cli_message(0x00,"<< An error has occurred at fn. finds() \n");
OR(flag,OPT_ERROR);
}

if(OPT_IGNORE&(flag)) {
r = embed(0x00,t);
// if(!r) cli_message(r,"<< Error at fn. embed() \n");
rl(t);
}

t = (0x00);
*(CLI_LK_TARGET+(R(b,cdi))) = (t);

if(b) {
r = embed(0x00,b);
if(!r) cli_message(r,"<< Error at fn. embed() \n");
rl(b);
b = (0x00);
}

*(CLI_LK_PATH+(R(b,cdi))) = (b);

printf("\n");
printf(" %d %s \n",*(CLI_LK_DIRECTORY+(R(r,cdi))),"directories");
if(!(OPT_DIRECTORIES&(R(flag,cdi)))) printf(" %d %s \n",*(CLI_LK_FILE+(R(r,cdi))),"files");

if(OPT_VERBOSE&(flag)) {
r = (R(depth,cdi));
if(r) --r;
printf(" %s %d \n","Depth:",r);
}

AND(R(depth,cdi),0x00);
if(OPT_ERROR&(flag)) return(0x00);

return(0x01);
}
