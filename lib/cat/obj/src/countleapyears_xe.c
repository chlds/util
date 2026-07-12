# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl countleapyears_xe(signed(args/*from*/),signed(argp/*to*/))) {
if(argp<(args)) sw(&args,&argp);
argp = countleapyearsuntil_xe(argp);
return(argp+(cii(countleapyearsuntil_xe(--args))));
}
