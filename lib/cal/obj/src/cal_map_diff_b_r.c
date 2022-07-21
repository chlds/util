/* **** Notes

Map difference with the Greenwich Mean time

Remarks:
Call fn. rl later
*/


# define CAL_H
# define CAR_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cal_map_diff_b_r(signed char(**di),time_t(*si))) {
auto signed char *b;
auto signed char *p;
auto time_t ch;
auto time_t t;
auto signed r;
auto time_t d = (24*(60*(60)));
auto signed char minus = ('-');
auto signed char *colon = (":");
auto signed char *ps = ("+");
auto signed char *ng = ("-");
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
t = (*si);
if(!(t<(d))) return(0x00);
b = (ps);
if(t<(0x00)) {
t = (0x01+(~t));
b = (ng);
}
if(!(cat_b(di,b,(void*)0x00))) return(0x00);
b = (0x00);
p = ("");
ch = (t/(60*(60)));
ch = (ch%(24));
r = (signed) (ch);
if(r<(0x0A)) p = ("0");
if(!(cv_d(0x0A,&b,r))) return(0x00);
r = cat_b(di,p,b,(void*)0x00);
if(EQ(minus,*b)) AND(r,0x00);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) return(0x00);
if(!(cat_b(di,colon,(void*)0x00))) return(0x00);
p = ("");
ch = (t/(60));
ch = (ch%(60));
r = (signed) (ch);
if(r<(0x0A)) p = ("0");
if(!(cv_d(0x0A,&b,r))) return(0x00);
r = cat_b(di,p,b,(void*)0x00);
if(EQ(minus,*b)) AND(r,0x00);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) return(0x00);
/*
if(!(cat_b(di,colon,(void*)0x00))) return(0x00);
p = ("");
ch = (ch%(60));
r = (signed) (ch);
if(r<(0x0A)) p = ("0");
if(!(cv_d(0x0A,&b,r))) return(0x00);
r = cat_b(di,p,b,(void*)0x00);
if(EQ(minus,*b)) AND(r,0x00);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) return(0x00);
//*/
return(0x01);
}
