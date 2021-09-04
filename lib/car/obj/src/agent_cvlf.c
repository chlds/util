/* **** Notes

Convert the code of line break into LF.

Remarks:
This program may immediately cause a stack overflow.
*/


# define CALEND
# define CAR
# define C_W32API
# include "./../../../incl/config.h"
# include "./../../../incl/c_dir.h"

signed(__cdecl agent_cvlf(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char *b,*p,*t;
auto signed i,l,r;
auto signed short flag;
auto c_dirs_info_t cdi;

if(argc<(0x02)) {
printf("\n");
printf(" Convert the code of line break into LF. \n");
printf("\n");
printf(" Syntax: \n");
printf(" cvlf.exe <DIR> <EXTENSION> \n");
printf(" cvlf.exe <FILE> \n");
printf("\n");
printf(" Example: \n");
printf(" cvlf.exe ./ .c \n");
printf(" cvlf.exe cba.c \n");
printf("\n");
printf(" Back files up before running this function if you'd like.. \n");
return(0x01);
}

if(argc<(0x03)) {
r = cv_lf(0x00/* backup */,*(argv+(argc+(~0x00))));
if(!r) {
printf("%s \n","<< Error at fn. cv_lf()");
return(0x00);
}
return(0x01);
}

p = (*(argv+(argc+(~0x01))));
r = ct(p);
if(!r) return(0x00);

i = (r);
if('*'^(*(p+(--i)))) {
if('/'^(*(p+(i)))) r++;
r++;
}

r++;
r = (r*(sizeof(*p)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

r = cpy(b,p);
if('*'^(*(b+(r+(~0x00))))) {
if('/'^(*(b+(r+(~0x00))))) *(b+(r++)) = ('/');
*(b+(r++)) = ('*');
*(b+(r)) = (0x00);
}

t = (0x00);
*(CLI_LK_TARGET+(R(b,cdi))) = (t);
*(CLI_LK_F_BACKUP+(R(b,cdi))) = (t);

AND(flag,0x00);
i = (CLI_LK_FILES);
while(i) *(--i+(R(r,cdi))) = (0x00);
cdi.flag = (flag);
cdi.dis = (0x00);
*(CLI_LK_PATH+(R(b,cdi))) = (b);
*(CLI_LK_F_EXTENSION+(R(b,cdi))) = (*(argv+(argc+(~0x00))));

r = cvlf_finds(&cdi);
if(!r) {
r = cli_message(r,"<< An error has occurred at fn. cvlf_finds() \n");
OR(flag,OPT_ERROR);
}

if(b) {
r = embed(0x00,b);
if(!r) cli_message(r,"<< Error at fn. embed() \n");
r = rl(b);
b = (0x00);
}

p = (b);
i = (CLI_LK_PATHS);
while(i) *(--i+(R(b,cdi))) = (p);

printf("\n");
printf(" %d %s \n",*(CLI_LK_DIRECTORY+(R(r,cdi))),"directories");
printf(" %d %s \n",*(CLI_LK_FILE+(R(r,cdi))),"files");

AND(R(depth,cdi),0x00);
if(OPT_ERROR&(flag)) return(0x00);

return(0x01);
}
