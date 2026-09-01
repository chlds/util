# define CAR_H
# define IO_H
# define STDIO_H
# include "./../../../config.h"

signed char *(__cdecl readkb(signed(args),signed(argp))) {
auto signed char a[KIB];
auto signed r;
auto signed e = (KIB);
auto signed s = (SEEK_CUR);
if(args<(0x00)) return(0x00);
if(!(0x00<(argp))) return(0x00);
r = read(args,a,e+(inv(0x00)));
if(!(0x00<(r))) return(0x00);
*(a+(r)) = (0x00);
r = cii(bury(a+(charles(a))));
if(!(0x01+(lseek(args,r,s)))) return(0x00);
return(catha(a,readkb(args,--argp)));
}
