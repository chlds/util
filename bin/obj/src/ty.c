/*

Typewriter
*/


# define R(D,S) (S).D
// A local macro function

# define ROLL (0x100000)
# define ROLL1 (ROLL)
# define ROLL2 (ROLL)
// 1MiB

# define CLI_W32
# include "../../../incl/config_ty.h"

signed(__cdecl main(signed argc,signed char **argv,signed char **envp)) {

auto signed long long ll;
auto signed char *p;
auto signed i,r;
auto signed short flag;

/*
auto signed char roll2[ROLL2] = {
(0x00),
};
//*/

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
// Charge buffers on workspace
*(CLI_BASE+(cli_w32_stat.ty.paper.base)) = (roll);
*(CLI_OFFSET+(cli_w32_stat.ty.paper.base)) = (roll1);
// *(CLI_INDEX+(cli_w32_stat.ty.paper.base)) = (roll2);

cli_w32_stat.ty.paper.size = (ROLL);

// Coordinate
r = cli_init_ty_beta(&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_ty_beta()");
return(0x00);
}

r = cli_init_pages(&(cli_w32_stat.ty.paper.spool));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_pages()");
return(0x00);
}

r = cli_spool_beta(&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_spool_beta()");
return(0x00);
}

r = cli_unmap_pages(&(cli_w32_stat.ty.paper.spool));
if(!r) {
printf("%s\n","<< Error at fn. cli_unmap_pages()");
return(0x00);
}

if(CLI_DBG) {
if(!(0x01^(r))) printf("%s\n","Unmapped 1 page");
else printf("%s%d%s\n","Unmapped ",r," pages");
}

return(0x01);
}
