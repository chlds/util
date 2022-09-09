/* **** Notes

Cue
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cue_backward_b_rrr(signed(arg),signed(rear))) {
auto signed ht = (0x01);
auto signed sp = (0x02);
if(EQ(ht,arg)) return(0x01);
if(EQ(ht,rear)) return(0x01);
if(EQ(sp,rear)) return(0x00);
// if(EQ(sp,arg)) return(0x01);
if(!(EQ(arg,rear))) return(0x01);
return(0x00);
}
