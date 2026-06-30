# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl convey(signed char(*args),signed(argp))) {
if(!args) return(args);
if(argp<(0x00)) AND(argp,0x00);
return(convey_xe(--argp,args,alloc(++argp*(sizeof(*args)))));
}
