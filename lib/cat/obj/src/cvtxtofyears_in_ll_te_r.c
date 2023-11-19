# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtofyears_in_ll_te_r(time_t *argp)) {
auto signed char *b;
auto signed r;
auto time_t t;
auto signed epoch = (1900);
auto signed idus = (13);
auto signed nonae = (5);
auto signed debug = (DBG);
auto time_t day = (24*(60*(60)));
if(!argp) return(0x00);
b = (0x00);
t = (*argp);
r = current_di_b(debug,argp);
if(!(0x01+(r))) return(b);
if(idus<(r)) {
r = (nonae+(idus));
t = (t+(r*(day)));
}
r = (epoch+(current_yr_b(debug,&t)));
if(r<(epoch)) return(b);
b = cv_in_roman_numerals(0x00,r);
return(b);
}
