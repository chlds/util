/* **** Notes

Count the elements of an array of pointers to the terminating null address

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


/* **** **** entry point */
char signed(__cdecl count_elements(int signed(**argp))) {

/* **** **** DATA
auto int unsigned const(QUANTUM) = (int signed) (0x10);
auto int unsigned const(SNOOZE) = (int signed) (0x04);
auto int unsigned const(DELAY) = (int signed) (0x02*(QUANTUM));
//*/

/* **** **** CODE/TEXT */
if(!argp) return(NIL);
if(!(*argp)) return(NIL);

(argp++);

return(1+(count_elements(argp)));
}
