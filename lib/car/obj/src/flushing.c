# define CAR_H
# include "./../../../config.h"

signed(__cdecl flushing(signed(args),void(*argp))) {
if(args<(0x00)) return(0x00);
if(fsyncs(args)) return(0x00);
return(0x01);
}
