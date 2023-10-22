# define CAR_H
# include "./../../../config.h"

signed(__cdecl caract_back_r(signed char *argp)) {
auto signed r;
auto signed seq = (0x80);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cara(cara_b(argp));
if(!r) return(r);
if(seq^(r)) return(0x01);
--argp;
return(0x01+(caract_back_r(argp)));
}
