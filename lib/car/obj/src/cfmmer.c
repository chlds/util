/*

Confirm

Remarks:
Return (0x00) on failure
Return (0x01) on AM
Return (0x02) on PM
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cfmmer(signed char **argp)) {
return(cfmmer_r(argp));
}
