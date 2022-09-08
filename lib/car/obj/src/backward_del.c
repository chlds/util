/* **** Notes

Delete

Remarks:
Return CTRL_Z or CTRL_W
Return (0x00) on failure
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl backward_del(signed char(*sym),signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(CTRL_W);
if(cue_backward_b(sym,argp)) return(CTRL_Z);
return(CTRL_W);
}
