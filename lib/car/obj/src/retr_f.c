/* **** Notes

Retrieve files.

Remarks:
Release buffer later.
Refer at fn. rl_v.
Refer at fn. finds.
*/


# define CAR
# define C_W32API
# include "../../../incl/config.h"
# include "../../../incl/c_dir.h"

signed(__cdecl retr_f(signed char(***di),signed char(*si))) {

auto signed char *b;
auto signed r;
auto dir_info_stored_t dis;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(*di) return(0x00);

r = ct(si);
if(r) {
if('/'^(*(--r+(si)))) return(0x00);
}

/* Open(, map, store or..) on the RAM */
b = (0x00);
r = cat_b(&b,si,"*",(void*) 0x00);
if(!r) return(0x00);
if(DBG) printf("[%s: %s] \n","b",b);
dis.search = (void(*)) FindFirstFile(b,&(R(wfd,dis)));
if(EQ(INVALID_HANDLE_VALUE,dis.search)) {
r = GetLastError();
if(!(EQ(ERROR_FILE_NOT_FOUND,r))) printf("%s %Xh \n","<< Error at fn. FindFirstFile() with error no.",r);
rl(b);
return(0x00);
}

if(DBG) printf("%s: %p \n","The search handle is",dis.search);

dis.p_dir = (si);
r = retr_f_r(di,&dis);
if(!r) {
printf("%s \n","<< Error at fn. retr_f_r()");
// return(0x00);
}

rl(b);
b = (0x00);
dis.p_dir = (b);

/* close, unmap or.. */
if(!(FindClose(dis.search))) {
r = GetLastError();
printf("%s %Xh \n","<< Error at fn. FindClose() with error no.",r);
return(0x00);
}

return(r);
}
