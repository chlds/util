/*

Typewriter
*/


# define ROLL (0x100000)
# define ROLL1 (ROLL)
// 1MiB

# define CLI_W32
# include "../../../incl/config_ty.h"

signed(__cdecl main(signed argc,signed char **argv,signed char **envp)) {

auto signed long long ll;
auto signed char *p;
auto signed i,r;

auto signed char roll1[ROLL1] = {
(0x00),
};

auto signed char roll[ROLL] = {
(0x00),
};

auto CLI_W32_STAT cli_w32_stat = {
(0x00),
};

// Initialise
*(CLI_OFFSET+(cli_w32_stat.ty.paper.base)) = (roll);
*(CLI_OFFSET1+(cli_w32_stat.ty.paper.base)) = (roll1);
// Also to align words along with tabs after wrapping words
*(CLI_OFFSET2+(cli_w32_stat.ty.paper.base)) = (*(CLI_OFFSET+(cli_w32_stat.ty.paper.base)));

r = init_ty_beta(&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. init_ty_beta()");
return(0x00);
}

return(0x01);
}
