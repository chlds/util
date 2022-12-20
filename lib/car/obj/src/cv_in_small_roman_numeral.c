/* **** Notes

Convert

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv_in_small_roman_numeral(signed(arg))) {
auto signed char *b;
auto signed r;
// auto signed epoch = (1970);
auto signed epoch = (0x00);
auto signed char *(i[]) = {
"","i","ii","iii","iv","v","vi","vii","viii","ix",0x00,
};
auto signed char *(x[]) = {
"","x","xx","xxx","xl","l","lx","lxx","lxxx","xc",0x00,
};
auto signed char *(c[]) = {
"","c","cc","ccc","cd","d","dc","dcc","dccc","cm",0x00,
};
auto signed char *(m[]) = {
"","m","mm","mmm",0x00,
};
auto signed char **(tbl[]) = {
m,c,x,i,0x00,
};
auto signed base[] = {
1000,100,10,1,0x00,
};
if(arg<(epoch)) return(0x00);
b = (0x00);
r = cv_in_roman_numeral_r(&b,tbl,base,arg);
if(!r) {
embed(0x00,b);
rl(b);
b = (0x00);
}
return(b);
}
