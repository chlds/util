# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl divfloor(signed(args),signed(argp))) {
if(!argp) return(argp);
if(!(args<(0x00))) return(args/(argp));
argp = dec(argp+(cii(args)))/argp;
return(cii(argp));
}
