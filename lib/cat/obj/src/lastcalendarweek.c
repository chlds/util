# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl lastcalendarweek(signed(argt),signed(args),time_t(argp))) {
auto time_t(__cdecl*c)(signed(args),time_t(argp));
auto time_t(__cdecl*(e[]))(signed(args),time_t(argp)) = {
lastcalendarweeksunday,
lastcalendarweekmonday,
lastcalendarweektuesday,
lastcalendarweekwednesday,
lastcalendarweekthursday,
lastcalendarweekfriday,
lastcalendarweeksaturday,
0x00,
};
if(argp<(0x00)) return(0x00);
c = (*(e+(argt%(counci((signed char**)(e))))));
return(c(args,argp));
}
