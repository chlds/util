# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdi_txt_r(signed char *argp)) {
auto signed char *b;
auto signed r;
auto signed days = (31);
if(!argp) return(0x00);
b = (argp);
if(!(cf_no(b))) return(0x00);
if(!(cv_da_first(0x0A,&r,b))) return(0x00);
if(!(0x00<(r))) return(0x00);
if(days<(r)) return(0x00);
return(r);
}
