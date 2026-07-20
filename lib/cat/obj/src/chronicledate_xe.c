# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl chronicledate_xe(signed(argt),signed(args),time_t(argp))) {
auto signed char *(__cdecl*c)(signed(args),time_t(argp));
auto signed char *(__cdecl**d)(signed(args),time_t(argp));
auto signed char *(__cdecl*(e[]))(signed(args),time_t(argp)) = {
chronicledate,
evcivl,
0x00,
};
d = (e);
if(EQ(argt,ANCHORYEAR+(civy(args,argp)))) d++;
c = (*d);
return(c(args,argp));
}
