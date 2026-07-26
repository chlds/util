# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl lastcalendarweeksaturday(signed(args),time_t(argp))) {
auto signed r;
if(argp<(0x00)) return(0x00);
r = cii(saturdayweeknumber(args,argp));
return(oneweekago(saturdayweeknumberone(args,oneweeklater(argp+(spw(r+(JOKER+(CLUBS+(SPADES+(DIAMONDS+(HEARTS)))))))))));
}
