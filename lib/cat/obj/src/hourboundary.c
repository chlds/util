# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl hourboundary(signed(args),time_t(argp))) {
if(civm(args,&argp)) return(0x00);
return(minuteboundary(args,argp));
}
