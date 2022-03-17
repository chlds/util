/*

Decode bytes into characters based on UTF-16.

Remarks:
Call fn. rl later.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_wb(signed short(**di),signed char(*si))) {
return(decode_wb(di,si));
}
