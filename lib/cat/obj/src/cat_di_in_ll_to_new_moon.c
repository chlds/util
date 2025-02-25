# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cat_di_in_ll_to_new_moon(signed(args/* di */),time_t(*argp))) {
auto signed r;
auto time_t te;
auto time_t day = (24*(60*(60)));
auto signed debug = (DBG);
if(!(0x00<(args))) return(0x00);
if(!argp) return(0x00);
te = (*argp);
te = (day+(te));
r = current_di_b(debug,&te);
if(!(0x00<(r))) return(0x00);
if(!(args<(r))) return(0x01);
return(0x01+(cat_di_in_ll_to_new_moon(args,&te)));
}
