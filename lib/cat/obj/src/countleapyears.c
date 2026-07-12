# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl countleapyears(signed(args/*from*/),signed(argp/*to*/))) {
if(argp<(args)) sw(&args,&argp);
argp = countleapyearsuntil(argp);
return(argp+(cii(countleapyearsuntil(--args))));
}
