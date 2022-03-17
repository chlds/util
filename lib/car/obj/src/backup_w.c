/* **** Notes

Store a backup file.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl backup_w(signed short(*extension),signed short(*argp))) {

auto signed short **v;
auto signed short *w;
auto signed r;
auto signed short *(a[OBJS]);

if(!extension) return(0x00);
if(!argp) return(0x00);

v = (a);
r = init_w(0x00,OBJS,v);
if(!r) {
printf("%s \n","<< Error at fn. init_w()");
return(0x00);
}

w = (0x00);
r = cat_w(&w,argp,extension,(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_w()");
return(0x00);
}

*(0x01+(v)) = (argp);
*v = (w);
r = wr_ds_w(v);
// if(!r) printf("%s \n","<< Error at fn. wr_ds_w()");
// e.g., 0B written.

embed_w(0x00,w);
rl(w);
w = (0x00);
if(!(init_w(0x00,OBJS,v))) printf("%s \n","<< Error at fn. init_w()");

return(r);
}
