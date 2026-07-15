# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl weekdate(time_t(argt),signed(args),signed(argp))) {
if(argt<(0x00)) return(0x00);
auto signed char *(__cdecl*c)(signed(args),time_t(argp));
auto signed char *(__cdecl*(e[]))(signed(args),time_t(argp)) = {
sundayweekdate,
mondayweekdate,
/*
tuesdayweekdate,
wednesdayweekdate,
thursdayweekdate,
fridayweekdate,
//*/
saturdayweekdate,
0x00,
};
c = (*(e+(argp%(counci((signed char**)(e))))));
return(c(args,argt));
}
