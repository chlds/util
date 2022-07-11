/*

Encode characters into bytes based on UTF-8

Remarks:
Call fn. rl later
Return the number of encoded bytes
Add support for surrogate pairs
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_bw(signed char(**di),signed short(*si))) {
return(encode_bw(di,si));
}
