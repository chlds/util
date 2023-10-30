# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl weekly_schedule(time_t(*args),time_t(*argp))) {
auto time_t te;
auto time_t days = (60*(60*(24*(7))));
if(!args) return(0x00);
if(!argp) return(0x00);
te = (*argp);
if(te<(0x00)) return(0x00);
te = (0x01+(~te));
te = (te+(*args));
if(te<(0x00)) return(0x00);
te = (te/(days));
if(te) return(0x00);
return(0x01);
}
