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

/* **** DATA, BSS and STACK */
auto signed char fname[BUFF] = {
(signed char) (0x00),
};

auto void **q,**m,**modules;
auto void *process;

auto signed *d,*process_ids;
auto signed char *b,*cur,*base,*p;

auto signed access_right;
auto signed i,ii,l,n,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
flag = (0x00);
if(0x01<(argc)) OR(flag,OPT_VERBOSE);

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
printf("%3s. %6s %s (%s) \n","No","PID","BaseName","Modules");
}

access_right = (PROCESS_QUERY_INFORMATION|PROCESS_VM_READ);
d = (process_ids);
l = (0x00);
n = (0x00);

while(i) {
--i;
if(OPT_VERBOSE&(flag)) printf("%3d. %6d ",l++,*d);
// map
process = OpenProcess(access_right,0x00/* inherit */,*d/* pid */);
if(!process) {
r = GetLastError();
if(OPT_VERBOSE&(flag)) printf("%s %d %s %Xh \n","<< Error at fn. OpenProcess() with no.",r,"or",r);
}
else {
// display modules for the process id
r = (BUFF);
r = (r*(sizeof(void*)));
modules = (void**) malloc(r);
if(!modules) {
printf("%s \n","<< Error at fn. malloc()");
break;
}
m = (modules);
r = EnumProcessModules(process,(void*) m,r,&ii);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. EnumProcessModules() with no.",r,"or",r);
// break;
// return(0x00);
}
if(r<(ii)) {
}
ii = (ii/(sizeof(void*)));
r = GetModuleBaseName(process,*m,fname,BUFF);
if(!r) {
}
if(!(OPT_VERBOSE&(flag))) printf("%3d. %6d ",n++,*d);
if(fname) {
printf("%s ",fname);
printf("(%d) ",ii);
//* Aux.
if(OPT_VERBOSE&(flag)) {
printf("\n");
while(--ii) {
m++;
r = GetModuleBaseName(process,*m,fname,BUFF);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetModuleBaseName() with no.",r,"or",r);
break;
}
printf("%s ",fname);
}}
//*/
}
printf("\n");
free(modules);
modules = (0x00);
}
if(process) {
r = CloseHandle(process);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. CloseHandle() with no.",r,"or",r);
break;
// return(0x00);
}}
d++;
}

free(process_ids);

printf("\n");
if(!(OPT_VERBOSE&(flag))) l = (n);
printf("%s %d \n","Total for processes:",l);

return(0x01);
}
