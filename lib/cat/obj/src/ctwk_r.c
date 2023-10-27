# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ctwk_r(signed(args),time_t(argp))) {
auto time_t te;
te = cvwk_one(args,argp);
if(te<(0x00)) return(0x00);
return(ctwk_rr(te,argp));
}
