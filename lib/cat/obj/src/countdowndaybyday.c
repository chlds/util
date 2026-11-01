# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl countdowndaybyday(time_t(arg))) {
auto signed r;
auto signed c = (0x00);
auto signed char p[] = ("Epiphany");
auto signed char t[] = ("Twelfth Night");
auto signed char a[] = ("Happy New Year!");
auto signed char e[] = ("New Year's Eve");
auto signed char f[] = ("day left in");
auto signed char d[] = ("days left in");
auto signed char x[] = ("Merry Christmas!");
auto signed char v[] = ("Christmas Eve");
auto signed char s[] = (" ");
if(arg<(0x00)) return(0x00);
r = civa(CANONICAL,arg);
/*
if(EQ(0x05,r)) return(cathy(p));
if(EQ(0x04,r)) return(cathy(t));
//*/
if(!r) return(cathy(a));
r = daysleftintheyear(arg);
if(!(0x01+(r))) return(0x00);
if(!r) return(cathy(e));
if(EQ(0x01,r)) return(cx(c,r,s,catha(f,catha(s,evcivy(CANONICAL,arg)))));
/*
if(EQ(0x06,r)) return(cathy(x));
if(EQ(0x07,r)) return(cathy(v));
//*/
return(cx(c,r,s,catha(d,catha(s,evcivy(CANONICAL,arg)))));
}
