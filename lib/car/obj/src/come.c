# define CAR_H
# include "./../../../config.h"

signed(__cdecl come(signed char(*args),signed char(*argp))) {
auto signed r;
if(!args) return(0x00);
if(!argp) return(0x00);
r = (0xFF&(*argp));
// if(!r) return(!(r^(0xFF&(*args))));
if(r^(0xFF&(*args))) return(0x00);
if(!r) return(0x01);
args++;
argp++;
return(come(args,argp));
}
