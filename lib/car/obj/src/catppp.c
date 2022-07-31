/* **** Notes

Call fn. catpp
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl catppp(signed char(***argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = catpp(*argp);
argp++;
return(0x01+(catppp(argp)));
}
