# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvyr_txt_r(signed char *argp)) {
auto signed char *b;
auto signed r;
auto signed lim = (3000);
auto signed epoch = (1900);
if(!argp) return(0x00);
b = (argp);
if(!(cf_no(b))) return(0x00);
if(!(cv_da_first(0x0A,&r,b))) return(0x00);
if(r<(epoch)) return(0x00);
if(!(r<(lim))) return(0x00);
return(r);
}
