/* **** Notes

Count arguments.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_argt_r(signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
AND(r,0x00);
if(!(EQ(HT,*argp))) OR(r,0x01);
return(r+(ct_argt_r(argp+(cue_argt(argp)))));
}
