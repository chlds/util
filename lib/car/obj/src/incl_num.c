/* **** Notes

Check numerals

Remarks:
Based on the decimal notation
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl incl_num(signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(cf_no(argp)) return(0x00);
argp++;
return(0x01+(incl_num(argp)));
}
