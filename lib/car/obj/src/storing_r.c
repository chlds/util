# define CAR_H
# define STDIO_H
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl storing_r(signed(fd),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (*argp);
argp++;
r = wr_b(fd,b,ct(b));
if(!r) return(0x00);
if(!(0x01+(r))) return(0x00); // occur an error..
return(r+(storing_r(fd,argp)));
}
