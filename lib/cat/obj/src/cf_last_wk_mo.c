/* **** Notes

Confirm of the last day of the week of the month from the time
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cf_last_wk_mo(time_t(*argp))) {
auto struct tm *tp;
auto signed short mo;
auto time_t t;
auto time_t days = (0x07);
auto time_t hr = (24);
auto time_t mn = (60);
auto time_t sm = (60);
if(!argp) return(0x00);
t = (*argp);
tp = localtime(&t);
if(DBG) tp = gmtime(&t);
if(!tp) return(0x00);
mo = (R(tm_mon,*tp));
t = (t+(days*(hr*(mn*(sm)))));
tp = localtime(&t);
if(DBG) tp = gmtime(&t);
if(!tp) return(0x00);
if(!(mo^(R(tm_mon,*tp)))) return(0x00);
return(0x01);
}
