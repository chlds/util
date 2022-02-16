/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define CALEND
# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_cals(signed(argc),signed char(**argv),signed char(**envp))) {

auto cals_event_t *ev;
auto signed char *b;
auto signed char *path;
auto cals_t cs;
auto cals_roll_t roll;
auto cals_event_t event;
auto signed i,r;
auto signed short for_months;
auto signed short flag;
auto signed FOR_MONTHS = (0x04);

if(!argv) return(0x00);
// if(!envp) return(0x00);

r = cals_init(0x00,&cs);
if(!r) return(0x00);

for_months = (FOR_MONTHS);
if(0x01<(argc)) {
b = (*(argv+(argc+(~0x00))));
r = cv_da(0x0A,&i,b);
// if(!r) return(0x00);
if(!r) {
if(DBG) printf("%s \n","<< Error at fn. cv_da()");
}
if(!i) i = (FOR_MONTHS);
// if(i<(0x00)) i = (0x01+(~i));
for_months = (i);
}

// also
if(0x04<(argc)) for_months = (FOR_MONTHS);

*(CLI_BASE+(R(argv,R(property,cs)))) = (argv);
path = (0x00);
if(0x02<(argc)) {
r = cmpr_part(&i,*(argv+(0x01)),"l");
if(!i) path = (*(argv+(0x02)));
}

AND(flag,0x00);
r = cals_flag(argv,&cs);
if(!r) {
OR(flag,CALS_ERROR);
OR(flag,CALS_QUIT);
OR(R(flag,cs),flag);
printf("%s \n","<< Error at fn. cals_flag()");
}

r = cals_flip(for_months,path,&cs);
if(!r) printf("%s \n","<< Error at fn. cals_flip()");

path = (0x00);

if(!(cals_init(0x01,&cs))) {
printf("%s \n","<< Error at fn. cals_init()");
return(0x00);
}

return(r);
}
