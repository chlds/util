/* Notes

Return days elapsed since a first day of the week

Remarks:
Return (~0x00) on failure
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ctdn_wk(signed(args),time_t(arg))) {
auto time_t te;
auto signed r;
auto signed days = (0x07);
if(args<(0x00)) return(~0x00);
if(0x06<(args)) return(~0x00);
if(arg<(0x00)) return(~0x00);
te = (arg);
r = current_wk_b(DBG,&te);
if(!(0x01+(r))) return(r);
r = (r+(days+(0x01+(~args))));
r = (r%(days));
return(r);
}
