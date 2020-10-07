/* **** Notes

sar [flags] [PID]

flags:
c: current
a: all
m: modules
s: system
v: verbose

Remarks:
Currently under construction
*/


# define C_CODE_STDS
# define C_MT
# define CAR
# define C_W32API
# include "./../../../lib/incl/config.h"
// # include <aclapi.h>

# define BUFF (0x04*(0x100))

/* **** entry point */
signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char uname[BUFF] = {
(signed char) (0x00),
};

auto signed char dname[BUFF] = {
(signed char) (0x00),
};

auto signed char fname[BUFF] = {
(signed char) (0x00),
};

auto TOKEN_PRIVILEGES priv;
auto LUID luid;
auto SID_NAME_USE snu;

auto void **m,**modules;
auto void *process;
auto void *token;
auto void *key;

auto signed *d,*process_ids;
auto signed char *b,*cur,*base,*p;

auto TOKEN_USER *tu;

auto signed access_right;
auto signed usize;
auto signed dsize;
auto signed i,ii,l,n,r;
auto signed tflag;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
flag = (0x00);
i = (0x00);
if(0x01<(argc)) {
r = cmpr_parts(&i,*(argv+(0x01)),"v");
if(r) {
if(!i) OR(flag,OPT_VERBOSE);
}}


// map
tflag = (0x00);
OR(tflag,TOKEN_ADJUST_PRIVILEGES);
OR(tflag,TOKEN_QUERY);
r = OpenProcessToken(GetCurrentProcess(),tflag,&token);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. OpenProcessToken() with no. ",r,"or",r);
return(0x00);
}
// retrieve a local uid
r = LookupPrivilegeValue((void*) 0x00,(signed char(*)) SE_DEBUG_NAME,&luid);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. LookupPrivilegeValue() with no. ",r,"or",r);
CloseHandle(token);
return(0x00);
}
// enable the local uid
R(Attributes,*(R(Privileges,priv))) = (SE_PRIVILEGE_ENABLED);
R(Luid,*(R(Privileges,priv))) = (luid);
R(PrivilegeCount,priv) = (0x01);
r = AdjustTokenPrivileges(token,0x00,&priv,sizeof(TOKEN_PRIVILEGES),(void*) 0x00,(void*) 0x00);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. AdjustTokenPrivileges() with no. ",r,"or",r);
CloseHandle(token);
return(0x00);
}
else {
r = GetLastError();
if(!(r^(ERROR_NOT_ALL_ASSIGNED))) printf("%s \n","As an account,");
if(!(r^(ERROR_SUCCESS))) printf("%s \n","As an administrative account,");
}
// unmap
r = CloseHandle(token);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. CloseHandle() with no. ",r,"or",r);
return(0x00);
}


// map
tflag = (0x00);
OR(tflag,TOKEN_QUERY);
r = OpenProcessToken(GetCurrentProcess(),tflag,&token);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. OpenProcessToken() with no. ",r,"or",r);
return(0x00);
}
// sizing
tflag = (TokenUser);
l = (0x00);
r = GetTokenInformation(token,tflag,(void*) 0x00,l,&l);
if(DBG) {
printf("%s %p \n","token:",token);
printf("%s %Xh \n","tflag:",tflag);
printf("%s %d \n","l:",l);
}
// map
tu = (TOKEN_USER(*)) LocalAlloc(LPTR,l);
if(!tu) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. LocalAlloc() with no. ",r,"or",r);
CloseHandle(token);
return(0x00);
}
// get
r = GetTokenInformation(token,tflag,tu,l,&l);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetTokenInformation() with no. ",r,"or",r);
LocalFree(tu);
CloseHandle(token);
return(0x00);
}
// check
dsize = (BUFF);
usize = (BUFF);
r = LookupAccountSid(0x00,R(Sid,R(User,*tu)),uname,&usize,dname,&dsize,&snu);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. LookupAccountSid() with no. ",r,"or",r);
LocalFree(tu);
CloseHandle(token);
return(0x00);
}
LocalFree(tu);
CloseHandle(token);
// display
printf("%s@%s %s \n",uname,dname,"[user@domain]");
printf("\n");


r = (BUFF);
r = (r*(sizeof(*process_ids)));
process_ids = (signed(*)) malloc(r);
if(!process_ids) return(0x00);

i = (0x00);
r = EnumProcesses(process_ids,r,&i);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. EnumProcesses() with no. ",r,"or",r);
free(process_ids);
return(0x00);
}

if(i) {
i = (i/(sizeof(*process_ids)));
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
r = (r*(sizeof(*m)));
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
ii = (ii/(sizeof(*m)));
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
