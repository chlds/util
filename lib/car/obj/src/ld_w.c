/* **** Notes

Load.

Remarks:
Call fn. rl later.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl ld_w(size_t(offset),signed(range),signed char(**di),signed char(*delim),signed short(*si/* path */))) {

auto signed char *b;
auto signed *d;
auto signed i,r;
auto signed short flag;
auto fl_t fl;
auto signed char *(ff_s[]) = {
("Character Device"),
("Regular"),
("Directory"),
0x00,
};
auto signed char *(ff[]) = {
("chr"),
("reg"),
("dir"),
0x00,
};

if(offset<(0x00)) return(0x00);
if(range<(0x01)) return(0x00);
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

r = cf_ff_w(si,*(0x01+(ff)));
if(!r) {
// printf("%s \n","<< Error at fn. cf_ff_w()");
printf("%s \n","Not a regular file..");
return(0x00);
}

if(!(offset<(sz_w(si)))) {
printf("%s \n","<< Over..");
return(0x00);
}

r = init_fl(0x00,&fl);
if(!r) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

d = (0x00);
r = cv_ds(&d,offset);
if(!r) {
printf("%s \n","<< Error at fn. cv_ds()");
return(0x00);
}

*(CLI_LEAD+(R(v,fl))) = (void*) (delim);
*(CLI_INDEX+(R(v,fl))) = (void*) (d);
*(CLI_INDEX+(R(fd,fl))) = (range);
r = parse_w(si,&fl,ld_b_r);
b = (signed char(*)) (*(CLI_DI+(R(v,fl))));
if(!r) {
embed_l(0x00,b);
if(b) rl(b);
b = (0x00);
}

*di = (b);
embed_d(0x02,d);
rl(d);
d = (0x00);
if(!(init_fl(0x00,&fl))) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

return(r);
}
