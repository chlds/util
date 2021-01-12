/* **** Notes

Initialise
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_init_property(signed short(arg),cli_property_t(*argp))) {

auto signed i,r;

if(!argp) return(0x00);

r = cli_init_frames(&(R(frame,*argp)));
if(!r) return(0x00);

r = cli_init_text(&(R(text,*argp)));
if(!r) return(0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(argv,*argp))) = (0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(argv_w,*argp))) = (0x00);

r = cli_init_boil(0x00/* init */,&(R(b,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_init_boil()");
return(0x00);
}

// aux.
i = (CLI_OBJS);
while(i) *(--i+(R(base,R(w,*argp)))) = (0x00);
AND(R(flag,R(w,*argp)),0x00);
R(optl,R(w,*argp)) = (0x00);

i = (CLI_OBJS);
while(i) {
*(--i+(R(token,*argp))) = (0x00);
*(i+(R(thread,*argp))) = (0x00);
*(i+(R(process,*argp))) = (0x00);
*(i+(R(window,*argp))) = (0x00);
*(i+(R(device,*argp))) = (0x00);
}

AND(R(flag,*argp),0x00);

AND(R(r,*argp),0x00);

R(optl,*argp) = (0x00);

if(arg) {
r = cli_retrieve_standard_handles_beta(R(device,*argp));
if(!r) {
printf("%s \n","<< Error at fn. cli_retrieve_standard_handles_beta()");
return(0x00);
}
r = coord_beta(CLI_IN,CLI_BOIL,&(R(coord,R(frame,*argp))));
if(!r) return(0x00);
r = rect_beta(CLI_IN,CLI_BOIL,&(R(rect,R(frame,*argp))));
if(!r) return(0x00);
r = pixel_beta(CLI_IN,CLI_BOIL,&(R(pixel,R(frame,*argp))));
if(!r) return(0x00);
}

OR(R(flag,*argp),CLI_INIT);

return(0x01);
}
