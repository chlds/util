# define CAR_H
# define IO_H
# define STDIO_H
# include "./../../../config.h"

signed char *(__cdecl ctds_r(signed(argt/*desc*/),signed(args/*arg*/),signed char *(__cdecl*argp)(signed(args/*desc*/),signed(argt/*arg*/)))) {
auto signed r;
auto signed s = (SEEK_SET);
if(!argp) return(0x00);
r = carh(args);
// AND(r,shr(gnm(clbs(0x01))));
if(!(0x01+(lseek(argt,r,s)))) return(0x00);
return(argp(argt,carl(args)));
}
