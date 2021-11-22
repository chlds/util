/* **** Notes

Duplicate.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl wr_ds_r_r(signed(arg),signed char(*cache),fl_t(*argp))) {

auto signed i,r;
auto signed short flag;

if(arg<(0x01)) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);

if(DBG) printf("\n");

AND(flag,0x00);
AND(i,0x00);
while(0x01) {
/* Reading */
r = rd_b(*(CLI_SI+(R(fd,*argp))),cache,arg);
if(!r) break;
if(!(r^(EOF))) {
printf("%s \n","<< Good! All written (with EOF)");
break;
}
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. rd_b()");
flag++;
break;
}
/* Writing after reading */
r = wr_b(*(CLI_DI+(R(fd,*argp))),cache,r);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. wr_b()");
flag++;
break;
}
i = (r+(i));
if(DBG) printf("\r%d %s ",i,"bytes");
}

if(flag) {
printf("%s \n","<< Could not copy..");
return(0x00);
}

return(i);
}
