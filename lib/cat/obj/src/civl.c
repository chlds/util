# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl civl(signed(args),time_t(*argp))) {
/*
auto signed(__cdecl*c)(signed(args),time_t(*argp));
auto signed(__cdecl**d)(signed(args),time_t(*argp));
auto signed(__cdecl*(e[]))(signed(args),time_t(*argp)) = {
civilmonth_xe,
civilmonth,
0x00,
};
d = (e);
if(CAT_CANONICAL) d++;
c = (*d);
return(c(args,argp));
//*/
return(civilmonth(args,argp));
}
