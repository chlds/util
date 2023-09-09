/*

Convert

Remarks:
Return (~0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvmn_txt(signed char *argp)) {
auto signed char *b;
auto signed r;
auto signed min = (60);
auto signed digit = (0x02);
if(!argp) return(~0x00);
b = (argp);
if(!(cf_no(b))) return(~0x00);
if(!(EQ(digit,ct_digits(b)))) return(~0x00);
if(!(cv_da_first(0x0A,&r,b))) return(~0x00);
if(r<(0x00)) r = (0x01+(~r));
if(!(r<(min))) return(~0x00);
return(r);
}
