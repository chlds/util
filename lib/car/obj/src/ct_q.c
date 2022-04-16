/* **** Notes

Count to the terminating null quad word.
*/


# include "./incl/config.h"

signed(__cdecl ct_q(signed long long(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(0x01+(ct_q(argp)));
}
