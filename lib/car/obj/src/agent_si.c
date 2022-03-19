/* **** Notes

Stat.
*/


# define CALEND
# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_si(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char *b;
auto signed r;
auto time_t t;

time(&t);
printf("\n");
printf("%s ","Current local time");
r = cals_out_t(t);
if(!r) {
printf("%s \n","<< Error at fn. cals_out_t()");
return(0x00);
}

printf("\n");
if(argc<(0x02)) return(0x01);

printf("\n");
b = (*(argv+(argc+(~0x00))));

return(agent_si_r(b));
}
