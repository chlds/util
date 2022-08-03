/* **** Notes

Retrieve files.

Remarks:
Refer at fn. rddir.
*/


# define CAR
# define C_W32API
# include "../../../incl/config.h"
# include "../../../incl/c_dir.h"

signed(__cdecl retr_f_r(signed char(***di),dir_info_stored_t(*argp))) {

auto signed char *b;
auto signed char *p;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(!argp) return(0x00);
if(!(R(search,*argp))) return(0x00);
if(!(R(p_dir,*argp))) return(0x00);

p = (R(cFileName,R(wfd,*argp)));
if(!p) return(0x00);

b = (0x00);
r = cat_b(&b,R(p_dir,*argp),p,(void*) 0x00);
if(!r) return(0x00);
if(DBG) printf("[%s: %s] \n","b",b);

r = append_va_b(di,b);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) return(0x00);

/* Read i.e., update with the search handle */
r = FindNextFile(R(search,*argp),&(R(wfd,*argp)));
if(!r) {
r = GetLastError();
if(r^(ERROR_NO_MORE_FILES)) printf("%s %Xh \n","<< Error at fn. FindNextFile() with error no.",r);
return(0x01);
}

return(0x01+(retr_f_r(di,argp)));
}
