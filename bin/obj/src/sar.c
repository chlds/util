/* **** Notes
*/


# define C_CODE_STDS
# define C_MT
# define CAR
# define C_W32API
# include "./../../../lib/incl/config.h"

# define BUFF (0x04*(0x100))

/* **** entry point */
signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto void **q,**modules;
auto void *process;

auto signed *d,*process_ids;
auto signed char *b,*cur,*base,*p;

auto signed i,l,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
r = (BUFF);
r = (r*(sizeof(signed)));
process_ids = (signed(*)) malloc(r);
if(!process_ids) return(0x00);

r = EnumProcesses(process_ids,r,&i);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. EnumProcesses() with no. ",r,"or",r);
free(process_ids);
return(0x00);
}

if(i) {
i = (i/(sizeof(signed)));
printf("%s %s \n","_No.","___PID");
}

d = (process_ids);
l = (0x00);
while(i) {
--i;
printf("%3d. %6d ",l,*d);
l++;
d++;
printf("\n");
}

/*
r = CloseHandle(process);
if(!r) {
printf("%s \n","<< Error at fn. CloseHandle()");
// return(0x00);
}
//*/

free(process_ids);

printf("\n");
printf("%s %d \n","Total for processes: ",l);

return(0x01);
}
