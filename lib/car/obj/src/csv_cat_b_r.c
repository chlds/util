/* **** Notes

Concatenate to the terminating null pointer.

Remarks:
Release buffer later.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl csv_cat_b_r(signed char(**di),signed char(**si))) {

auto signed char comma = (',');
auto signed char *b;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = concatenate(0x01,di,*si);
if(!r) return(0x00);

b = (*di);
*(--r+(b)) = (0x00);
if(r) *(--r+(b)) = (comma);
else return(0x00);

si++;
b = (0x00);

return(0x01+(csv_cat_b_r(di,si)));
}
