# define CAR_H
# define TIME_H
# define STDIO_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl cfmtxt_utf_8_rrr_rr(signed char(*argt),signed(args),signed(argp))) {
auto signed char *b;
auto signed r;
auto signed fd;
auto signed mask = (0xFF);
if(!argt) return(0x00);
if(args<(0x00)) return(0x00);
if(!(0x00<(argp))) return(0x00);
b = (argt);
fd = (args);
r = rd_b(fd,b,sizeof(*b));
if(!r) return(r);
if(!(0x01+(r))) {
if(DBG) printf("%s %Xh \n","<< Error at fn. rd_b() with errno.",errno);
return(r);
}
r = (signed)(mask&(*b));
r = caract(cara(r));
if(!r) return(r);
if(--r) {
r = cfmtxt_utf_8_rrr_rr_r(argt,args,r);
argp = (argp+(0x01+(~r)));
}
--argp;
r++;
return(r+(cfmtxt_utf_8_rrr_rr(argt,args,argp)));
}
