/* **** Notes

Schedule

Remarks:
Refer fn. execvpe
*/


# define SCHED_H
# define CAR_H
# define CAL_H
# define CAT_H
# define TIME_H
# define STDIO_H
# include <process.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl agent_sched(signed(argc),signed char(**argv),signed char(**envp))) {
auto signed char **v,**e;
auto signed char *b;
auto signed char *path;
auto signed r;
auto signed short hr,mn;
auto signed short flag;
auto time_t t;
auto sched_t sched;
auto signed local = (0x01);
auto signed size = (0x200);
auto signed char buff[0x200];
auto signed char *(a[0x02]);
auto signed char *(errors[]) = {
"E2BIG",
"EACCES",
"EINVAL",
"EMFILE",
"ENOENT",
"ENOEXEC",
"ENOMEM",
0x00,
};
auto signed error[] = {
E2BIG,
EACCES,
EINVAL,
EMFILE,
ENOENT,
ENOEXEC,
ENOMEM,
0x00,
};
if(argc<(0x03)) return(sched_help());
time(&t);
cal_out_time(t);
printf("\n");
if(!(init_sched(&sched))) return(0x00);
// if(!envp) return(0x00);
OR(*(R(flag,sched)),SCHED_MONITOR);
b = (0x00);
v = (argv);
v++;
if(!(cv_bv(" ",&b,v))) return(0x00);
if(DBG) printf("b. [%s] \n",b);
printf("\n");
r = agent_sched_r(&sched,b);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) {
// printf("%s \n","<< Error at fn. agent_sched_r()");
printf("%s \n","Error: Time could not be set.");
return(0x00);
}
path = (*(0x01+(argv)));
if(DBG) printf("path: [%s] \n",path);
if(!(quot_b(size,buff,path))) return(0x00);
printf("%s \n","Pressing any key cancels the schedule.");
printf("\n");
b = (buff);
hr = (*(SCHED_HR+(R(time,sched))));
mn = (*(SCHED_MN+(R(time,sched))));
printf("%s %s %s %2d:%02d \n","Launch",b,"at",hr,mn);
if(!(sched_b(local,&sched))) {
printf("%s \n","<< Error at fn. sched_b()");
return(0x00);
}
flag = (*(R(flag,sched)));
if(SCHED_ALREADY&(flag)) {
e = (envp);
v = (a);
*v = (b);
v++;
*v = (0x00);
v = (a);
r = execvpe(path,v,e);
if(EQ(r,~0x00)) {
printf("%s %Xh \n","<< Error at fn. execvpe() with errno.",errno);
r = ct_vb(errors);
while(r) if(EQ(errno,*(--r+(error)))) printf("%s %s. \n","<< Occurred an error with",*(r+(errors)));
}}
b = (0x00);
printf("\n");
printf("%s \n","Cancelled");
return(0x01);
}
