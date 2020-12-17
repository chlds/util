/* **** Notes

Initialise
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_init_property(cli_property_t(*argp))) {

auto signed i,r;

if(!argp) return(0x00);

r = cli_init_text(&(R(text,*argp)));
if(!r) return(0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(b,*argp))) = (0x00);
i = (CLI_OBJS);
while(i) *(--i+(R(w,*argp))) = (0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(token,*argp))) = (0x00);
i = (CLI_OBJS);
while(i) *(--i+(R(thread,*argp))) = (0x00);
i = (CLI_OBJS);
while(i) *(--i+(R(process,*argp))) = (0x00);
i = (CLI_OBJS);
while(i) *(--i+(R(window,*argp))) = (0x00);
i = (CLI_OBJS);
while(i) *(--i+(R(handle,*argp))) = (0x00);
i = (CLI_OBJS);
while(i) *(--i+(R(device,*argp))) = (0x00);

AND(R(x,*argp),0x00);
AND(R(y,*argp),0x00);
AND(R(flag,*argp),0x00);

AND(R(r,*argp),0x00);

R(optl,*argp) = (0x00);

OR(R(flag,*argp),CLI_INIT);

return(0x01);
}
