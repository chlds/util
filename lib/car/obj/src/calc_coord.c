/* **** Notes

Calculate coordinates of the terminating address of an array for characters.

Remarks:
Absorb deviation caused by wrapping words.
Refer at incl/recur.h.
*/


# define C_CODE_STDS
# define CAR
# include "../../../incl/config.h"

signed(__cdecl calc_coord(COORDS(*coords),signed char(*argp),signed(cols))) {

/* **** DATA, BSS and STACK */
auto signed char *base;
auto signed char *p;
auto signed r;

/* **** CODE/TEXT */
if(!coords) return(0x00);
if(!argp) return(0x00);

r = ct(argp);
INC(r);

p = malloc(r*(sizeof(signed char)));

if(!p) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}

base = (argp);
(*coords).x = (0x00);
(*coords).y = (0x00);

r = calc_coord_internal(coords,p,argp,base,cols);

/* empty or occurred an error..
if(!r) {
printf("%s", "<< Error at fn. calc_coord_internal()");
return(0x00);
}
//*/

free(p);

return(r);
}
