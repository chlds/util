# define CAR_H
# define TIME_H
# define STDIO_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl cfmtxt_utf_8_rrr_rr_r(signed char(*argt),signed(args),signed(argp))) {
auto signed char *b;
auto signed r;
auto signed fd;
auto signed sequence = (0x80);
if(!argt) return(0x00);
if(args<(0x00)) return(0x00);
if(!(0x00<(argp))) return(0x00);
b = (argt);
fd = (args);
r = rd_b(fd,b,sizeof(*b));
if(!r) return(r);
if(!(0x01+(r))) {
if(DBG_M&(DBG)) printf("%s %Xh \n","<< Error at fn. rd_b() with errno.",errno);
return(r);
}
if(!(EQ(sequence,cara(cara_b(b))))) return(0x00);
--argp;
return(0x01+(cfmtxt_utf_8_rrr_rr_r(argt,args,argp)));
}
