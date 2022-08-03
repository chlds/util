/* **** Notes

Store contents after retrieving a file descriptor to write

Remarks:
Refer at fn. wr_ds_w and fn. wr_ds_b
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl wr_ds_r(signed(fd),signed(**argp))) {
auto signed **v;
auto signed *d;
auto signed a[OBJS];
if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);
v = (argp);
d = (*(CLI_W+(v)));
if(!d) return(0x00);
*(CLI_W+(a)) = (*d);
*(CLI_B+(a)) = (fd);
v = (0x00);
return(wr_rd(a));
}
