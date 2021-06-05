/* **** Notes

Initialise
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_init_property(signed(arg),cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto void **(v[]) = {
R(device,*argp),
R(token,*argp),
R(thread,*argp),
R(process,*argp),
R(window,*argp),
0x00,
};

auto void ***vv;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CLI_INIT&(*(CLI_BASE+(R(flag,*argp)))))) AND(arg,0x00);

r = cli_init_clipboards(arg,&(R(clipboard,*argp)));
if(!r) return(0x00);

r = cli_init_text(arg,&(R(text,*argp)));
if(!r) return(0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(argv,*argp))) = (0x00);

vv = (v);
while(*vv) {
i = (CLI_OBJS);
while(i) *(--i+(*vv)) = (0x00);
vv++;
}

i = (CLI_OBJS);
while(i) AND(*(--i+(R(flag,*argp))),0x00);
R(optl,*argp) = (0x00);

if(!arg) OR(*(CLI_BASE+(R(flag,*argp))),CLI_INIT);

return(0x01);
}
