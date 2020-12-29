/* **** Notes

Unmap a circular/doubly linked list.

flag: 0x00 is in a doubly linked list and the others are in a circular linked list.

Remarks:
Please look at util/incl/ll.h
//*/


# define CAR
# include "../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl unmap_ll_internal(signed short(flag),KNOT(*lead),KNOT(*base))) {

/* **** DATA, BSS and STACK */
auto KNOT *cache;
auto signed i,r;

/* **** CODE/TEXT */
if(!lead) return(0x00);
if(!base) return(0x00);

if(flag) {
// i.e., in a circular LL
if(EQ(lead,base)) {
embed(0x00,R(p,*lead));
free(R(p,*lead));
R(p,*lead) = (signed char(*)) (0x00);
free(lead);
return(0x01);
}}

cache = (lead);
lead = (R(s,*lead));

if(R(p,*cache)) {
// r = embed(ct(R(p,*cache)),R(p,*cache));
embed(0x00,R(p,*cache));
free(R(p,*cache));
R(p,*cache) = (signed char(*)) (0x00);
}

free(cache);
cache = (0x00);

return(0x01+(unmap_ll_internal(flag,lead,base)));
}
