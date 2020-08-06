/* **** Notes

Concatenate a knot in a circular/doubly linked list.

flag: 0x00 is in a doubly linked list and the others are in a circular linked list.
cache: Put an address of the <knot> structure at.

Remarks:
Please look at util/incl/ll.h
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl concat_ll(signed short(flag),KNOT(*cache),REEL(*argp))) {

/* **** DATA, BSS and STACK */
auto signed long long ll;
auto signed i,r;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

ll = (signed long long) (*(CLI_LEAD+(R(knot,*argp))));
if(!(ll^((signed long long) *(CLI_INDEX+(R(knot,*argp)))))) R(insert,*argp) = (0x00);
else R(insert,*argp) = (0x01);

if(!(R(insert,*argp))) {
if(!(*(CLI_LEAD+(R(knot,*argp))))) *(CLI_BASE+(R(knot,*argp))) = (cache);
else R(d,**(CLI_LEAD+(R(knot,*argp)))) = (cache);
R(s,*cache) = (*(CLI_LEAD+(R(knot,*argp))));
*(CLI_LEAD+(R(knot,*argp))) = (cache);
if(!flag/* i.e., in a doubly LL */) R(d,**(CLI_LEAD+(R(knot,*argp)))) = (0x00);
else {
/* i.e., in a circular LL */
R(d,**(CLI_LEAD+(R(knot,*argp)))) = (*(CLI_BASE+(R(knot,*argp))));
R(s,**(CLI_BASE+(R(knot,*argp)))) = (*(CLI_LEAD+(R(knot,*argp))));
}
// Aux.
*(CLI_OFFSET+(R(knot,*argp))) = (*(CLI_BASE+(R(knot,*argp))));
*(CLI_INDEX+(R(knot,*argp))) = (*(CLI_LEAD+(R(knot,*argp))));
}

else {
R(s,*(R(d,**(CLI_INDEX+(R(knot,*argp)))))) = (cache);
R(d,*cache) = (R(d,**(CLI_INDEX+(R(knot,*argp)))));
R(s,*cache) = (*(CLI_INDEX+(R(knot,*argp))));
R(d,**(CLI_INDEX+(R(knot,*argp)))) = (cache);
// Aux.
*(CLI_INDEX+(R(knot,*argp))) = (cache);
}

return(0x01);
}
