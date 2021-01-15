/* **** Notes

Initialise

Remarks:
Refer at fn. cli_init_property.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_init_text(signed(arg),cli_text_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_b_t *(b[]) = {
(&(R(append,*argp))),
(&(R(b,*argp))),
(0x00),
};

auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

// initialise
if(!(CLI_INIT&(R(flag,*argp)))) AND(arg,0x00);

AND(R(width,*argp),0x00);
AND(R(height,*argp),0x00);
AND(R(flag,*argp),0x00);
AND(R(attribute,*argp),0x00);

AND(i,0x00);
while(*(b+(i))) {
r = cli_init_boil(arg,*(b+(i++)));
if(!r) {
printf("%s%d%s \n","<< Error at fn. cli_init_boil(arg,*(b+(",--i,")))");
return(0x00);
}}

R(optl,*argp) = (0x00);

if(!arg) OR(R(flag,*argp),CLI_INIT);

return(0x01);
}
