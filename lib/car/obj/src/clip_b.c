/* **** Notes

Clip.

Remarks:
Return an offset number on success.
//*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl clip_b(signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
auto signed short flag;
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
b = (*argp);
r = ct(b);
r = (r+(0x01+(~arg)));
if(r<(0x00)) return(0x00);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
if(!(cpy(b,arg+(*argp)))) *b = (0x00);
embed(0x00,*argp);
if(*argp) rl(*argp);
*argp = (b);
b = (0x00);
// return(r);
return(arg);
}
