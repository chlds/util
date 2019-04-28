/* **** Notes

Look the environment variables
*/

# define C_CODE_STDS
# include "./../../../incl/config.h"

signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x08);
auto signed const(DELAY) = (0x02*(QUANTUM));
//*/

auto signed char(**(p[])) = {
(signed char(**)) (argv),
(signed char(**)) (envp),
(signed char(**)) (NIL)
};

auto signed(r);

/* **** CODE/TEXT */
printf("\n");

r = catppp(p);
printf("%s%d\n", "r is: ", r);

return(0x00);
}
