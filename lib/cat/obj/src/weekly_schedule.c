# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl weekly_schedule(signed(argt),time_t(*args),time_t(*argp))) {
auto time_t te;
auto time_t day = (60*(60*(24)));
auto time_t days = (day*(7));
if(!args) return(0x00);
if(!argp) return(0x00);
te = (*argp);
te = (0x01+(~te));
te = (te+(*args));
if(te<(0x00)) return(0x00);
if(te/(days)) return(0x00);
argt = (argt%(0x07));
if(argt) {
day = (day*(time_t)(argt));
if(te/(day)) return(0x00);
}
return(0x01);
}
