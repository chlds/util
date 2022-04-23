/* **** Notes

Commandlet to output the local time

Remarks:
Transparency
*/


# define CAW_H
# define SAT_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cmdl2_time_select(SAT(*argp))) {

auto void *(oldbm[OBJS]);
auto void *v;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

AND(flag,0x00);
i = (OBJS);
while(i) {
--i;
v = select_object_beta(*(i+(R(dc,*argp))),*(i+(R(bm,*argp))));
*(i+(oldbm)) = (v);
if(!v) {
printf("%s \n","<< Error at fn. select_object_beta()");
OR(flag,0x01);
}}

if(!flag) {
r = cmdl2_time_selects(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_selects()");
}

i = (OBJS);
while(i) {
--i;
v = select_object_beta(*(i+(R(dc,*argp))),*(i+(oldbm)));
if(!v) {
printf("%s \n","<< Error at fn. select_object_beta()");
OR(flag,0x01);
}}

if(flag) AND(r,0x00);

return(r);
}
